/****************************************************************
**                                                             **
**                          TÏTOL: Repte 3                     **
**                            projecte 2                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
int thisByte = 126;

//*********************** SETUP *********************************

void setup()  {               // run once, when the sketch starts
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps
    
      Serial.println("ASCII Table ~ Character Map"); 
 }      
}
//************************ LOOP *********************************
void loop() {      
  Serial.write(thisByte);
     
      Serial.print(", dec: ");
      Serial.print(thisByte);
      Serial.print(", hex: ");
      Serial.print(thisByte,HEX);
      Serial.print(", oct: ");
      Serial.print(thisByte, OCT);
      Serial.print(" ,bin: ");
      Serial.println(thisByte, BIN);

if(thisByte == 126);     // if printed last visible character '~'
      {
        while(true);
        {
        }
        
      }
      thisByte++;             //go on the next character
}
 


//****************** FUNCIONS ***********************************


