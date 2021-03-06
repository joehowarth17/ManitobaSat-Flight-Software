//-------------------------------------------------------------------------------------------------
// File Description:
//  This file contains tests related to the watchdog timer.
//
// History
// 2020-04-21 by Joseph Howarth
// - Created.
//-------------------------------------------------------------------------------------------------

#include <FreeRTOS-Kernel/include/FreeRTOS.h>
#include <FreeRTOS-Kernel/include/task.h>
#include "tests.h"
#include "drivers/mss_gpio/mss_gpio.h"
#include "drivers/device/watchdog.h"

void vTestWD(void *pvParameters)
{
    // In the future, this task could be used as a reset service. For instance, tasks could:
    // - Check-in to this task. If a task fails to check-in as expected, the watchdog would be left to reset.
    // - Request a reset.

    // Note that the watchdog is not enabled (by the MSS) for certain situations, such as:
    // - While debugging.
    // - Programming.
    if (timeout_occured_WD())
    {
        clear_timeout_WD();
        // TODO - Log event!
    }
    else
    {
        // TODO - Log event!
    }

    uint8_t pinState=0;
    MSS_GPIO_set_output(MSS_GPIO_19, 1);

    for (;;)
    {
    	for (int ix=0; ix<6; ix+=1)
    	{
    		MSS_GPIO_set_output(MSS_GPIO_18, pinState);
    		pinState = ~pinState;
    		service_WD();
            vTaskDelay(pdMS_TO_TICKS(500));
    	}

		MSS_GPIO_set_output(MSS_GPIO_18, pinState);
		pinState = ~pinState;
		service_WD();
        vTaskDelay(pdMS_TO_TICKS(1650));
    }
}
