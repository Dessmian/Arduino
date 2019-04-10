#define P HIGH
#define A LOW
void autoIncreible ( int [] ) ;
void setup() {
    int leds [] = { 1 , 2 , 3 , 4 , 5 } ;
    int i ;
    for ( i = 0 ; i < 5 ; i++ ) {
      pinMode ( leds [i] , OUTPUT ) ;
    }
}
void loop() {

  int leds [] = { 1 , 2 , 3 , 4 , 5 } ;
  autoIncreible (leds) ;  
}

// usar valor absoluto
void autoIncreible ( int pins []){
  int tiempo = 15 ;
  int i ;
  for ( i = 0 ; i < 5 ; i ++ ){
    digitalWrite ( pins [ i ] , P ) ;
    delay ( tiempo ) ;
    digitalWrite ( pins [ i ] , A ) ;
  }
  for ( i = 3 ; i > 0 ; i-- ){
    digitalWrite ( pins [ i ] , P ) ;
    delay ( tiempo ) ;
    digitalWrite ( pins [ i ] , A ) ;
  } 
}

