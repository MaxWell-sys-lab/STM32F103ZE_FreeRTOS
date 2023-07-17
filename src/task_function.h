#ifndef _TASK_FUNCTION_H_
#define _TASK_FUNCTION_H_

// typedef enum
// {
//     Task_Priority_1 = 
// }Task_Priority_Enum_TypeDef;
typedef struct 
{
    bool Key_UP_Pressed     = false;
    bool Key_Down_Pressed   = false;
    bool Key_Left_Pressed   = false;
    bool Key_Right_Pressed  = false;
}Key_Scan_Result_TypeDef;

void Task_LED_1_Control(void *pvParameters );
void Task_LED_2_Control(void *pvParameters );
void Task_Key_Scan(void *pvParameters );
void Task_Print_Key_Result(void *pvParameters );





#endif