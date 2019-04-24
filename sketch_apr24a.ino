#define LED 5
int estadoBoton ;
int estadoAnteriorBoton = 1 ;
int estadoLed = 0 ;
int iteration = 0 ;
void setup() {
  pinMode ( 2 , INPUT ) ;
  pinMode ( LED , OUTPUT ) ;
  Serial.begin ( 9600 ) ;
}

void loop() {

  estadoBoton = digitalRead ( 2 ) ;
  if ( estadoBoton != estadoAnteriorBoton ) {
    if ( estadoBoton == HIGH ) {
      estadoLed = !estadoLed ;
      delay ( 20 ) ;
      digitalWrite ( LED , estadoLed ) ;
      if ( estadoLed ) {
        Serial.println ( "Prendido" ) ;
      } else {
        Serial.println ( "Apagado" ) ;
      }
    }  
  }
  estadoAnteriorBoton = estadoBoton ;
  delay ( 150 ) ;
}
int buttonSwitch ( int buttonPin )
{
   
}

