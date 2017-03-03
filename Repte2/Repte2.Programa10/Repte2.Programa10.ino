/****************************************************************
**                                                             **
**                          TÏTOL: Repte 2                     **
**                            projecte 10                      **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
float a = 3;
float b = 2;
float d;
            

//*********************** SETUP *********************************

void setup()  {               // run once, when the sketch starts
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps
    
      Serial.println("Here is division: "); 
  
      Serial.print("a = ");
      Serial.println(a);
      Serial.print("b = ");
      Serial.println(b);

      d = a / b;

      Serial.print("a / b = ");
      Serial.println(d);
      
      }
}
//************************ LOOP *********************************
void loop() {        // we need this to be here even thoughy its  empty 
}

//****************** FUNCIONS ***********************************


