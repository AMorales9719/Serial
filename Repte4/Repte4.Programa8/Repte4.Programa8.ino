/****************************************************************
**                                                             **
**                          TÏTOL: Repte 4                     **
**                            projecte 8                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
int comptar  = 11;
int i = 0;

//*********************** SETUP *********************************

void setup()               // run once, when the sketch starts
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps
    
      Serial.print("Ara comptare de 0 a ");
      Serial.println(comptar);
       while (i <= comptar);
      {
        Serial.print(i);
        Serial.print("-");
        i++;
      }
 }
//************************ LOOP *********************************
void loop()         // we need this to be here even thought its empty 
{
  
}





//****************** FUNCIONS ***********************************


