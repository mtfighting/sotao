void setup()

{

  pinMode(0, OUTPUT);

  pinMode(1, OUTPUT);

  pinMode(2, OUTPUT);

  pinMode(3, OUTPUT);

  pinMode(4, OUTPUT);

  pinMode(5, OUTPUT);

  //pinMode(6, OUTPUT);

  Serial.begin(9600);

}



byte income=0;



void loop()

{

  if(Serial)

  {

  

  }

  else

  {

  

  }

  digitalWrite(0, HIGH);

  digitalWrite(1, HIGH);

  digitalWrite(2, LOW);

  digitalWrite(3, HIGH);

  digitalWrite(4, HIGH);

  digitalWrite(5, LOW);

  digitalWrite(6, HIGH);

  delay(10);

}
