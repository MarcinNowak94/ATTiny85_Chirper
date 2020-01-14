 /*
  Chirper
  ------------------------------------------------------------------------------
  Programming
  ----------------------------------------------------------------------------
  In order to program this sketch to AtTiny85 you have to ser Arduino UNO as
  programmer.
  Burn default sketch to Your Arduino UNO:      File > Examples > Arduino ISP
  Then conect it to ATTiny85: https://www.instructables.com/id/How-to-Program-an-Attiny85-From-an-Arduino-Uno/
  Chose your new programmer:              Tools > Programmer > Arduino as ISP.
  Pick ATTiny as your board:              Tools > Board > AtTiny85

  Recommended settings: 
  Tools > Board                 : ATTiny85
  Tools > Processor Speed       : 9.6MHz Internal Oscillator
  Tools > Use Bootloader        : No (ISP Programmer Upload)
  Tools > Millis, Tone Support  : Millis and Tone Available
  Tools > Millis Accuracy       : 1.666%
  Tools > Print Support         : Bin, Hex, Dec Supported
  Tools > Link Time Optimisation: LTO Enabled
  Tools > Bron-Out detection lvl: 2.7V
  Tools > Override Clock Source : Internal Oscilator 8MHz
  Tools > Override Frequency    : 20MHz
  
  Now you may burn bootlader to your ATTiny85
  Then burn your code
    
  Pinout
  ------------------------------------------------------------------------------
  ATTiny85 pinout
  
         +------+
  RESET [|o1  8 |] 5V
  A3  3 [| 2  7 |] 2  A1
  A2  4 [| 3  5 |] 1  PWM
  GND   [| 4  6 |] 0  PWM
         +------+

  Important: 
    pinMode() must only be used with the "digital pin numbers" 0 .. n
    pins default to INPUT, you do not need to pinMode() to INPUT if you are only
    ever doing an analogRead() from the pin. 
    
    analogRead() must only be used with the "analog pin numbers" A0 .. n

*/



#define INITIAL     5000
#define LED_PIN     0
#define BEEP_DELAY  30

void setup() {
  pinMode(LED_PIN, OUTPUT);
}


void loop() { 
 for (int i = 1; i < 50; i++) { 
   digitalWrite(LED_PIN, HIGH); 
   delay(BEEP_DELAY); 
   digitalWrite(LED_PIN, LOW); 
   delay(INITIAL/i); 
 } 
}
