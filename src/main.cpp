#include <Arduino.h>
#include "STM32FreeRTOS.h"
#include "project_config.h"

Key_Scan_Result_TypeDef Key_Scan_Result;
TaskHandle_t Task_LED_0_Control_TaskHandle;
TaskHandle_t Task_LED_1_Control_TaskHandle;

void setup()
{
	Serial.begin(115200);
}

void loop()
{
	xTaskCreate( Task_LED_0_Control, (const portCHAR *) "LED_0_Control", configMINIMAL_STACK_SIZE, NULL, 2, &Task_LED_0_Control_TaskHandle);
	
	xTaskCreate( Task_LED_1_Control, (const portCHAR *) "LED_1_Control", configMINIMAL_STACK_SIZE, NULL, 1, &Task_LED_1_Control_TaskHandle);

	xTaskCreate( Task_Key_Scan, (const portCHAR *) "Task_Key_Scan", configMINIMAL_STACK_SIZE, NULL, 1, NULL);
	
	xTaskCreate( Task_Print_Key_Result, (const portCHAR *) "Task_Print_Key_Result", configMINIMAL_STACK_SIZE, NULL, 1, NULL);

	// xQueueCreateCountingSemaphore();
	// xSemaphoreCreateCounting();
	// xSemaphoreTake();
	// vTaskDelayUntil()

	vTaskStartScheduler();
	while(1);
}


