

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <modm/architecture/interface/assert.hpp>

extern "C" void vApplicationStackOverflowHook(TaskHandle_t, const char *);

void vApplicationStackOverflowHook(TaskHandle_t /*pxTask*/, const char *pcTaskName)
{
	modm_assert(false, "freertos", "stack", "overflow", pcTaskName);
}
