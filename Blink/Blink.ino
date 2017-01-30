/****************************************************************
**                                                            **
**                       TÍTOL: Blink                         **
**                                                            **
**                                                            **
**                                                            **
**  NOM: Ariel Jinez                         DATA: 21/01/2017 **                
****************************************************************/
//************************ INCLUDE *****************************

 
//*********************** VARIABLES ****************************



//************************* SETUP ******************************
 
void setup() {                   
//initialize the digital pin as an output.
//Pin 13 has LED connected on most Arduino boards:

pinMode(13,OUTPUT);
}

//************************** LOOP *******************************

void loop() {                       
digitalWrite(13,HIGH);//set the LED on
delay(1000);//wait for a second
digitalWrite(13,LOW);//set the LED off
delay(1000);//wait for a second

}

//************************* FUNCIONS ****************************
