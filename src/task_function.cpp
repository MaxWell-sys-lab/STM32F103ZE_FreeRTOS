#include "task_function.h"
#include "project_config.h"

void Task_LED_0_Control( void *pvParameters __attribute__((unused)) )
{
	pinMode(LED_0_Pin, OUTPUT);
	bool LED_0_Statu = LOW;
	while(1)
	{
		digitalWrite(LED_0_Pin, LED_0_Statu);
		LED_0_Statu = !LED_0_Statu;
		// Serial.print("LED_0_Control: ");
		// Serial.println(LED_0_Statu);
		vTaskDelay(500 * portTICK_PERIOD_MS);
	}
	
}

void Task_LED_1_Control( void *pvParameters __attribute__((unused)) )
{
	pinMode(LED_1_Pin, OUTPUT);
	bool LED_1_Statu = LOW;
	while(1)
	{
		digitalWrite(LED_1_Pin, LED_1_Statu);
		LED_1_Statu = !LED_1_Statu;
		// Serial.print("LED_1_Control: ");
		// Serial.println(LED_1_Statu);
		vTaskDelay(300 * portTICK_PERIOD_MS);
	}
	
}

void Task_Key_Scan( void *pvParameters __attribute__((unused)) )
{
	pinMode(KEY_UP_Pin, INPUT_PULLDOWN);
	pinMode(KEY_DOWN_Pin, INPUT_PULLUP);
	pinMode(KEY_LEFT_Pin, INPUT_PULLUP);
	pinMode(KEY_RIGHT_Pin, INPUT_PULLUP);

	extern Key_Scan_Result_TypeDef Key_Scan_Result;
	extern TaskHandle_t Task_LED_0_Control_TaskHandle;
	extern TaskHandle_t Task_LED_1_Control_TaskHandle;

	while(1)
	{
		Key_Scan_Result.Key_UP_Pressed 		= !digitalRead(KEY_UP_Pin);
		Key_Scan_Result.Key_Down_Pressed 	= digitalRead(KEY_DOWN_Pin);
		Key_Scan_Result.Key_Left_Pressed 	= digitalRead(KEY_LEFT_Pin);
		Key_Scan_Result.Key_Right_Pressed 	= digitalRead(KEY_RIGHT_Pin);
		if(Key_Scan_Result.Key_UP_Pressed == true)
		{
			if(eTaskGetState(Task_LED_0_Control_TaskHandle) != eBlocked)
			{
				vTaskResume(Task_LED_0_Control_TaskHandle);
				Serial.println("vTaskResume(Task_LED_0_Control_TaskHandle)");
			}
			// Serial.print("Task_LED_0_State:");
			// Serial.println(eTaskGetState(Task_LED_0_Control_TaskHandle));
		}
		else
		{
			if(eTaskGetState(Task_LED_0_Control_TaskHandle) != eSuspended)
			{
				vTaskSuspend(Task_LED_0_Control_TaskHandle);
				Serial.println("vTaskSuspend(Task_LED_0_Control_TaskHandle)");
			}
			// Serial.print("Task_LED_0_State:");
			// Serial.println(eTaskGetState(Task_LED_0_Control_TaskHandle));
		}
		if(Key_Scan_Result.Key_Down_Pressed == true)
		{
			if(eTaskGetState(Task_LED_1_Control_TaskHandle) != eBlocked)
			{
				vTaskResume(Task_LED_1_Control_TaskHandle);
				Serial.println("vTaskResume(Task_LED_1_Control_TaskHandle)");
			}
		}
		else
		{
			if(eTaskGetState(Task_LED_1_Control_TaskHandle) != eSuspended)
			{
				vTaskSuspend(Task_LED_1_Control_TaskHandle);
				Serial.println("vTaskSuspend(Task_LED_1_Control_TaskHandle)");
			}
		}
		// Serial.println("=============================================");
		// Serial.print("UP:");
		// Serial.println(Key_Scan_Result.Key_UP_Pressed);
		// Serial.print("Down:");
		// Serial.println(Key_Scan_Result.Key_Down_Pressed);
		// Serial.print("Left:");
		// Serial.println(Key_Scan_Result.Key_Left_Pressed);
		// Serial.print("Right:");
		// Serial.println(Key_Scan_Result.Key_Right_Pressed);
		// Serial.println("=============================================");
		// vTaskDelay(500);
	}
}

void Task_Print_Key_Result(void *pvParameters )
{
	extern Key_Scan_Result_TypeDef Key_Scan_Result;

	while(1)
	{
		Serial.println("=============================================");
		Serial.print("UP:");
		Serial.println(Key_Scan_Result.Key_UP_Pressed);
		Serial.print("Down:");
		Serial.println(Key_Scan_Result.Key_Down_Pressed);
		Serial.print("Left:");
		Serial.println(Key_Scan_Result.Key_Left_Pressed);
		Serial.print("Right:");
		Serial.println(Key_Scan_Result.Key_Right_Pressed);
		Serial.println("=============================================");
		vTaskDelay(300);
	}
}