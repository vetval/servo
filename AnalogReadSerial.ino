/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
  int sensorValue0;
  int sensorValue1;
  int sensorValue2;
  int sensorValue3;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  //Serial.begin(9600);
  //pinMode(13, OUTPUT);//led
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  sensorValue0 = analogRead(A0)>>2;
  sensorValue1 = analogRead(A1)>>2;
  sensorValue2 = analogRead(A2)>>2;
  sensorValue3 = analogRead(A3)>>2;
  // print out the value you read:
  //Serial.println("A0="+String(sensorValue0)+" A1="+String(sensorValue1)+" A2="+String(sensorValue2)+" A3="+String(sensorValue3));
  analogWrite(11, sensorValue0);
  analogWrite(10, sensorValue1);
  analogWrite(9,  sensorValue2);
  analogWrite(3,  sensorValue3);
}
