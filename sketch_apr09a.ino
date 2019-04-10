#define VERDE 7
#define AMARILLO 8
#define ROJO 9
#define PRENDE HIGH
#define APAGA LOW
void titilar ( int ) ;
void semaforo () ;
void setup() {
  
  pinMode ( 9 , OUTPUT ) ;
  pinMode ( 8 , OUTPUT ) ; 
  pinMode ( 7 , OUTPUT ) ; 

}

void loop() {
  strobos () ;
  //titilar ( VERDE ) ;
  //titilar ( AMARILLO ) ;
  //titilar ( ROJO ) ;
  //semaforo () ;
}
void titilar ( int pin ) {
  digitalWrite ( pin , HIGH ) ;
  delay ( 100 ) ;
  digitalWrite ( pin , LOW ) ;
  delay ( 100 ) ;
  digitalWrite ( pin , HIGH ) ;
  delay ( 100 ) ;
  digitalWrite ( pin , LOW ) ;
  delay ( 100 ) ;
  digitalWrite ( pin , HIGH ) ;
  delay ( 100 ) ;
  digitalWrite ( pin , LOW ) ;
  delay ( 100 ) ;
}
void semaforo () {
  digitalWrite ( VERDE , PRENDE ) ;
  delay ( 6000 ) ;  
  digitalWrite ( AMARILLO , PRENDE  ) ;
  digitalWrite ( VERDE , APAGA ) ;
  delay ( 1000 ) ;
  digitalWrite ( ROJO , PRENDE ) ;
  digitalWrite ( AMARILLO , APAGA ) ;
  delay ( 6000 ) ;
  digitalWrite ( ROJO , APAGA ) ;
  digitalWrite ( AMARILLO , PRENDE  ) ;
  delay ( 1000 ) ;
  digitalWrite ( AMARILLO , APAGA ) ;
}
void strobos () {
  digitalWrite ( VERDE , HIGH ) ;
  digitalWrite ( AMARILLO , HIGH ) ;
  digitalWrite ( ROJO , HIGH ) ;
  delay ( 50 ) ;
  digitalWrite ( VERDE , LOW ) ;
  digitalWrite ( AMARILLO , LOW ) ;
  digitalWrite ( ROJO , LOW ) ;
  delay ( 50 ) ;
  digitalWrite ( VERDE , HIGH ) ;
  digitalWrite ( AMARILLO , HIGH ) ;
  digitalWrite ( ROJO , HIGH ) ;
  delay ( 50 ) ;
  digitalWrite ( VERDE , LOW ) ;
  digitalWrite ( AMARILLO , LOW ) ;
  digitalWrite ( ROJO , LOW ) ;
  delay ( 50 ) ;
  digitalWrite ( VERDE , HIGH ) ;
  digitalWrite ( AMARILLO , HIGH ) ;
  digitalWrite ( ROJO , HIGH ) ;
  delay ( 50 ) ;
  digitalWrite ( VERDE , LOW ) ;
  digitalWrite ( AMARILLO , LOW ) ;
  digitalWrite ( ROJO , LOW ) ;
  delay ( 50 ) ;
}
