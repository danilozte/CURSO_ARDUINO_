String cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
String cout;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);


}

void loop() {
  // put your main code here, to run repeatedly:
  while(true){
for(int i = 0; i < 4; i++) {
 Serial.println (cars[i]);
 
 
}
  }
  Serial.println("----------------"); 
}
