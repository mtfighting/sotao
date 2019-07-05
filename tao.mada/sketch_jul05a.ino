void setup()

{

   pinMode(5, OUTPUT);

   pinMode(6, OUTPUT);

   pinMode(10, OUTPUT);

   pinMode(11, OUTPUT);

   Serial.begin(9600);

}



int income();



void loop()

{

  if(Serial.available()>0){

     income=Serial.read();

  }

  switch(income){

    case:'f':

        forward();

    break;

    

    case:'b':

        backward();

    break;

    

    case:'l':

        left();

    break;

    

    case:'r':

        right();

    break;

    

    case:'s':

        stop();

    break;

    

    default;

    break;

  }

}



void forward(){

  digitalWrite(5,HIGH);

  digitalWrite(6,LOW);

  digitalWrite(11,HIGH);

  digitalWrite(10.LOW);

}



void backward(){

  digitalWrite(5,HIGH);

  digitalWrite(6,LOW);

  digitalWrite(10,HIGH);

  digitalWrite(11.LOW);

}



void left(){

  digitalWrite(5,HIGH);

  digitalWrite(6,LOW);

  digitalWrite(11,HIGH);

  digitalWrite(10.LOW);

}



void right(){

  digitalWrite(6,HIGH);

  digitalWrite(5,LOW);

  digitalWrite(10,HIGH);

  digitalWrite(11.LOW);

}



void stop(){

  digitalWrite(6,LOW);

  digitalWrite(5,LOW);

  digitalWrite(10,LOW);

  digitalWrite(11.LOW);

}