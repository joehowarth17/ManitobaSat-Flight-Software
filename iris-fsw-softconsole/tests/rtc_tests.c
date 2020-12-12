//-------------------------------------------------------------------------------------------------
// File Description:
//  This file contains tests related to the real time clock.
//
// History
// 2020-04-21 by Joseph Howarth
// - Created.
//-------------------------------------------------------------------------------------------------

#include <FreeRTOS/include/FreeRTOS.h>
#include <FreeRTOS/include/task.h>
#include "tests.h"

#include "drivers/device/rtc/rtc_time.h"


void vTestRTC(void *pvParameters)
{
    // Test code
    static volatile int error_occurred = 0;

    static Calendar_t buffer = {
            59u, // seconds
            59u, // minutes
            23u, // hours
            28u, // day
            2u, // February
            20u, // year (2020)
            1u, // weekday
            1u, // week (not used), HOWEVER it must be 1 or greater.
    };

    static Calendar_t buffer2;

    vTaskSuspendAll();
    ds1393_write_time(&buffer);
    if (TIME_SUCCESS != resync_rtc())
    {
        error_occurred = 1;
    }
    xTaskResumeAll();

    for (;;)
    {
        vTaskSuspendAll();
        ds1393_read_time(&buffer);
        read_rtc(&buffer2);
        xTaskResumeAll();
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}
