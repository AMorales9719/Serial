/****************************************************************
**                                                             **
**                          TÏTOL: Repte 2                     **
**                            projecte 5                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
long drive_gb = 100;
long drive_mb;            //we changed the type from "int" lo "long"


//*********************** SETUP *********************************

void setup()  {               // run once, when the sketch starts
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps
    
      Serial.print("Your HD is "); 
      Serial.print(drive_gb);
      Serial.println( "GB large.");

        drive_mb = 1024 * drive_gb;
        
        Serial.print("It can store ");
        Serial.print(drive_mb);
        Serial.println(" Megabytes!");
        }
}
//************************ LOOP *********************************
void loop() {        // we need this to be here even thoughy its  empty 
}

//****************** FUNCIONS ***********************************


