/****************************************************************
**                                                             **
**                          TÏTOL: Repte 2                     **
**                            projecte 7                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
int test = 32767;
            

//*********************** SETUP *********************************

void setup()  {               // run once, when the sketch starts
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps
    
      Serial.print("Test value is: "); 
      Serial.println(test);
      
 test = test + 1;
        
        
        Serial.print("Now it is ");
        Serial.println(test);
        }
}
//************************ LOOP *********************************
void loop() {        // we need this to be here even thoughy its  empty 
}

//****************** FUNCIONS ***********************************


