
char num;
char *ptrNum;


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 
 ptrNum = &num;
 //*ptrNum = 'h';
 

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 1) {
     char aux = Serial.read(); //Leer 1 carácter
     *ptrNum += aux;
     Serial.print(num);
     delay(1000);
  }

  Serial.print(num);
  delay(1000);
  
}
