/****************************************************************
**                                                             **
**                          TÏTOL: Repte 4                     **
**                            projecte 4                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
int qualEnergy = 15;

//*********************** SETUP *********************************

void setup()               // run once, when the sketch starts
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps
    
      if (qualEnergy >= 43.2)
      {
        Serial.print("Agua G");
  }
      else if ( qualEnergy < 43.2 & qualEnergy > 38.2)
 {
 Serial.print("F");
 }
else if (qualEnergy <= 38.2 & qualEnergy > 17.7)
{
  Serial.print("E");
}
else if (qualEnergy <= 17.1 & qualEnergy > 11.1)
{
  Serial.print("D");
}
else if ( qualEnergy <= 11.1 & qualEnergy > 6.5)
{
  Serial.print("C");
}
else if (qualEnergy <= 6.5 & qualEnergy > 3.5)
 {
  Serial.print("B");
}
  else
  {
    Serial.print("A");
    
  }
}
//************************ LOOP *********************************
void loop()         // we need this to be here even thought its empty  
{
}





//****************** FUNCIONS ***********************************


