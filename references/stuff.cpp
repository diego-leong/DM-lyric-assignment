// C++ code
//

//setting up variables
int red = 2;
int yellow = 1;
int green = 0;
  

void setup()
{
  //set up red light
  pinMode(red, OUTPUT);
  //set up yellow light
  pinMode(yellow, OUTPUT);
  //set up green light
  pinMode(green, OUTPUT);
  //reset all the lights to make sure they aren't all on - it can help!
    //turn off red light
  digitalWrite(red, LOW);
    //turn off yellow light
  digitalWrite(yellow, LOW);
    //turn off green light
  digitalWrite(green, LOW);
}

void loop()
{
  
  //turn on red light on
  digitalWrite(red, HIGH);
  //WAIT 5 seconds
  delay(5000);
  //turn off red light
  digitalWrite(red, LOW);
  //turn on green light
  digitalWrite(green, HIGH);
  //WAIT 5 seconds
  delay(5000);
  //turn off green light
  digitalWrite(green, LOW);
  //turn on yellow light 
  digitalWrite(yellow, HIGH);
  //WAIT 2 seconds
  delay(2000);
  //turn off yellow light
  digitalWrite(yellow, LOW);
  
  
  
}

  //turn on red light on
  digitalWrite(red, HIGH);
  //WAIT defaultDelay
  delay(defaultDelay);
  //turn off red light
  digitalWrite(red, LOW);
  //turn on green light
  digitalWrite(green, HIGH);
  //WAIT 5 seconds
  delay(5000);
  //turn off green light
  digitalWrite(green, LOW);
  //turn on yellow light 
  digitalWrite(yellow, HIGH);
  //WAIT 2 seconds
  delay(2000);
  //turn off yellow light
  
  //yellow off  
  //green on
  //wait and keep
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    delay(defaultDelay);
  
  //green off
  //yellow on
  //wait and keep
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(defaultDelay);
  
  
  //yellow off
  //red on
  //wait and keep
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(defaultDelay);

  //red off
  //yellow on
  //wait and keep
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    delay(defaultDelay);

    