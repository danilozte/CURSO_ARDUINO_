//MATRIZ
String nombres[3] = {"ALLEGRO", "BMW", "TOYOTA"};
String contraseñas[3] = {"125", "456", "456"};

//GLOBALES

double fondos = 5000;
int cont_1 = 0;
int cont_2 = 0;

bool flag = true;
bool flag2 = true;


String _usuario = "TOYOTA";
String _contraseña = "456";

int LED = 2;
int LED2 = 3;

// ESTRUCTURA
struct Car
{
  String nombre; // Nombre del modelo
  int km;       // Numero de pines digitales
  bool estado_led;
} ;

   



 void setup(){
 Serial.begin( 115200);
   struct Car mazda;
   struct Car led_1;
   pinMode(LED,OUTPUT);
   pinMode(LED2,OUTPUT);
/////////////////////////////////////////////

  //instanciando el primer objeto

  mazda.nombre = "allegro";
  mazda.km = 140;

  //pinMode(led_1.pin,OUTPUT);
  Serial.print("El nombre del carro es :  "); Serial.println(  mazda.nombre);
  Serial.print("El kilometraje es :  "); Serial.println(mazda.km);
  
  // funcion para cambiar el valor de una variable de la estructura
  move(&mazda,10);
  Serial.print("Estado del kilometraje cambió a:  "); Serial.println(mazda.km);
   Serial.println(""); 
  Serial.println("desintegrar la matriz"); 


 
}

void loop()
{
  
 /////////////////////////////////////////////////////
   while(flag){
  for (int i = 0; i <3 ; i= i+1) {
  Serial.print("valor de la lista :"); Serial.println(nombres[i]);
  delay(500);
  if(nombres[i] == _usuario){
    Serial.println("es correcto");
    digitalWrite(LED2, HIGH);
    delay(600);
    digitalWrite(LED2,LOW);
    delay(600);
    }
  cont_1++;
  
  if(cont_1 == 3)
  {
   flag = false;
    }  
         
  }
  Serial.print("fin de la lista nombres"); 
  }
  
//////////////////////////////////////////

while(flag2){
  for (int v = 0; v <3 ; v = v+1) {
  Serial.print("valor de la contraseña :"); Serial.println(contraseñas[v]);
  delay(500);
  
  if(contraseñas[v] == _contraseñas){
    Serial.println("es correcto");
    digitalWrite(LED, HIGH);
    delay(600);
    digitalWrite(LED,LOW);
    delay(600);
    }
    cont_2++;
  
  if(cont_2 == 3)
  {
   flag2 = false;
    }  
         
  }
  Serial.print("fin de la lista contraseña"); 
  }
   
}

void move(Car *self, int distance) {
  self->km += distance;
}
