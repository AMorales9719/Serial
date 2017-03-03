/****************************************************************
**                                                             **
**                          TÏTOL: Repte 4                     **
**                            projecte 5                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
int sensorReading = 4;

//*********************** SETUP *********************************

void setup()               // run once, when the sketch starts
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps

    Serial.print("The day is ");

    switch (sensorReading) {
      case 0:
      Serial.println("dark");
      break;
      case 1:
      Serial.println("dim");
      break;
      case 2:
      Serial.println("medium");
      break;
      case 3:
      Serial.println("bright");
      break;
      default:
      Serial.println("... I don't know !!!");
    }
    }
    
//************************ LOOP *********************************
void loop()         // we need this to be here even thought its empty  
{
}





//****************** FUNCIONS ***********************************


