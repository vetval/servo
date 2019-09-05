/* servo2
 *  2 servo для кормушки
*/

#include <Servo.h>
#define OPEN1_POS 180
#define OPEN2_POS 180
#define CLOSE1_POS 0
#define CLOSE2_POS 0

Servo servo1;  // create servo object to control a servo
Servo servo2;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  servo1.attach(8);  // attaches the servo on pin 8 to the servo object
  servo2.attach(9);  // attaches the servo on pin 9 to the servo object
  servo1.write(CLOSE1_POS);  // tell servo to go to close position
  servo2.write(CLOSE2_POS);  // tell servo to go to close position
  delay(500);       // waits 300ms for the servos to reach the position
  servo1.write(OPEN1_POS);  // tell servo to go to open position
  delay(2000);      
  servo2.write(OPEN2_POS);  // tell servo to go to open position
  delay(2000);      
  servo2.write(CLOSE2_POS); 
  delay(2000);              
  servo2.write(CLOSE1_POS); 
  delay(1000);              
}

void loop() {
  delay(2000);                    
}
