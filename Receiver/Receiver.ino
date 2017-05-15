#include <Servo.h>

#define MD0 7
#define MD1 8

uint8_t Throttle = 0, x_Axis = 90, y_Axis = 90;
uint8_t t, x, y, a, m;
boolean ReceiveDone = false; 
uint8_t ReceiveState = 0;

Servo x_Servo, y_Servo, Motor1, Motor2;
