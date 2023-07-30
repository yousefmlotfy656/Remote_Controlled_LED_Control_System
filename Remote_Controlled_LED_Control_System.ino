#define REMOTEXY_MODE__ESP8266_HARDSERIAL

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial3
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "xxxxxxx"
#define REMOTEXY_WIFI_PASSWORD "xxxxxx"
#define REMOTEXY_SERVER_PORT 6377


int port1 =0;
int clicks = 0;
int clicks1 = 0;
int switchState = 0; // actual read value from pin4
int oldSwitchState = 0; // last read value from pin4
int lightsOn = 0;
int count1 = 1;
int count2 = 1;
int switchState1 = 0; // actual read value from pin4
int oldSwitchState1 = 0; // last read value from pin4
int switchState2 = 0;
int switchState3 = 0;
int switchState4 = 0;
int switchState5 = 0;
int switchState6 = 0;
int switchState7 = 0;
int switchState8 = 0;
int switchState9 = 0;
int switchState10 = 0;
int switchState11 = 0;
int switchState14 = 0;
int switchState15 = 0;
int oldSwitchState2 = 0; // last read value from pin4
int oldSwitchState3 = 0; // last read value from pin4
int oldSwitchState4 = 0; // last read value from pin4
int oldSwitchState5 = 0; // last read value from pin4
int oldSwitchState6 = 0; // last read value from pin4
int oldSwitchState7 = 0; // last read value from pin4
int oldSwitchState8 = 0; // last read value from pin4
int oldSwitchState9 = 0; // last read value from pin4
int oldSwitchState10 = 0; // last read value from pin4
int oldSwitchState11 = 0; // last read value from pin4
int oldSwitchState14 = 0; 
int oldSwitchState15 = 0; 
int lightsOn1 = 0;
int lightsOn2 = 0;
int lightsOn3 = 0;
int lightsOn4 = 0;
int lightsOn5 = 0;
int lightsOn14 = 0;
// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =
  { 255,8,0,8,0,220,0,10,26,0,
  1,0,2,5,12,12,201,31,76,97,
  109,112,32,49,0,1,0,2,19,12,
  12,201,31,76,97,109,112,32,50,0,
  1,0,2,33,12,12,201,31,76,97,
  109,112,32,51,0,1,0,2,47,12,
  12,201,31,76,97,109,112,32,52,0,
  65,4,21,8,9,9,65,4,21,23,
  9,9,65,4,21,36,9,9,65,4,
  21,49,9,9,1,0,86,17,12,12,
  201,31,79,110,47,79,102,102,0,1,
  0,86,45,12,12,201,31,79,110,47,
  79,102,102,0,1,0,72,17,12,12,
  15,31,83,112,101,101,100,0,1,0,
  72,45,12,12,15,31,83,112,101,101,
  100,0,65,4,40,19,9,9,65,4,
  41,46,9,9,129,0,54,6,18,6,
  24,0,129,0,53,33,16,6,24,70,
  97,110,32,50,0,66,130,54,17,13,
  10,15,24,66,130,54,46,13,10,15,
  24,129,0,53,33,16,6,24,70,97,
  110,32,50,0,129,0,54,4,16,6,
  24,70,97,110,32,49,0 };
  
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t button_1; // =1 if button pressed, else =0 
  uint8_t button_2; // =1 if button pressed, else =0 
  uint8_t button_3; // =1 if button pressed, else =0 
  uint8_t button_4; // =1 if button pressed, else =0 
  uint8_t button_6; // =1 if button pressed, else =0 
  uint8_t button_5; // =1 if button pressed, else =0 
  uint8_t button_7; // =1 if button pressed, else =0 
  uint8_t button_8; // =1 if button pressed, else =0 
    // output variables
  uint8_t led_1_r; // =0..255 LED Red brightness 
  uint8_t led_2_r; // =0..255 LED Red brightness 
  uint8_t led_3_r; // =0..255 LED Red brightness 
  uint8_t led_4_r; // =0..255 LED Red brightness 
  uint8_t led_5_r; // =0..255 LED Red brightness 
  uint8_t led_6_r; // =0..255 LED Red brightness 
  int8_t level_1; // =0..100 level position 
  int8_t level_2; // =0..100 level position 
    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_BUTTON_1 A7
#define PIN_BUTTON_2 A6
#define PIN_BUTTON_3 A5
#define PIN_BUTTON_4 A4
#define PIN_BUTTON_6 A2
#define PIN_BUTTON_5 A3

#define switch_1 22// D5 Pin of NodeMcu
#define switch_2 3 // D6 Pin of NodeMcu
#define switch_3 4
#define switch_4 5
#define switch_5 6
#define switch_6 7 
#define press_1 8
#define press_2 9
#define output_1 52
#define output_2 50
#define output_3 48
#define output_4 46
#define output_5 44
#define output_6 42
#define output_7 40
#define output_8 38
#define output_9 36
#define output_10 34
void setup() {
  // put your setup code here, to run once:
  


  pinMode (PIN_BUTTON_1, OUTPUT);
  pinMode (PIN_BUTTON_2, OUTPUT);
  pinMode (PIN_BUTTON_3, OUTPUT);
  pinMode (PIN_BUTTON_4, OUTPUT);
  pinMode (PIN_BUTTON_6, OUTPUT);
  
  pinMode (PIN_BUTTON_5, OUTPUT);
  pinMode (output_1, OUTPUT);
  pinMode (output_2, OUTPUT);
  pinMode (output_3, OUTPUT);
  pinMode (output_4, OUTPUT);
  pinMode (output_5, OUTPUT);
  pinMode (output_6, OUTPUT);
  pinMode (output_7, OUTPUT);
  pinMode (output_8, OUTPUT);
 pinMode (output_9, OUTPUT);
  pinMode (output_10, OUTPUT);
    
  pinMode(switch_1, INPUT);
  pinMode(switch_2, INPUT);
  pinMode(switch_3, INPUT);
  pinMode(switch_4, INPUT);
  pinMode(switch_5, INPUT);
  pinMode(switch_6, INPUT);
  pinMode(press_1, INPUT);
  pinMode(press_2, INPUT);
  // TODO you setup code
  
}

void loop() {
 
   
 
 switchState = digitalRead(switch_1); // read the pushButton State
 if (switchState != oldSwitchState || switchState1 != oldSwitchState1 ) // catch change
 {
 oldSwitchState = switchState;
 oldSwitchState1 = switchState1;
 if (switchState == HIGH || switchState1 == HIGH )
 {
 // toggle
 lightsOn = !lightsOn;
 }
 }
 if(lightsOn )
 {
 digitalWrite(PIN_BUTTON_1, HIGH); // set the LED off

 } else {  
 digitalWrite(PIN_BUTTON_1, LOW); // set the LED off
  
 }
}
