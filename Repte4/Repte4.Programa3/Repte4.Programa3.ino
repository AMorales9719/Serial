/****************************************************************
**                                                             **
**                          TÏTOL: Repte 4                     **
**                            projecte 3                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
int tempAgua = 101;

//*********************** SETUP *********************************

void setup()               // run once, when the sketch starts
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps
    
      if ( tempAgua < 90 )
      {
        Serial.print("Agua todavia no hierve");
  }
      else if ( tempAgua >= 90 & tempAgua < 100)
 {
 Serial.print("Agua a punto de hervir");
 }
else if ( tempAgua == 100)
{
  Serial.print(" Agua a 100 C ");  
}
else 
{
  Serial.print(" Agua hirviendo ");
 }
 }    

//************************ LOOP *********************************
void loop()         // we need this to be here even thought its empty  
{
}





//****************** FUNCIONS ***********************************


