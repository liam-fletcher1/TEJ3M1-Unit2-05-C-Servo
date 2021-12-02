// C code
// Servo intro program
//

# include <Servo.h>

Servo servo;

void setup()
{
  servo.attach(2);
  servo.write(0);
  delay(2000);
}

void loop()
{
  servo.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
  servo.write(0);
  delay(1000); // Wait for 1000 millisecond(s)
}
