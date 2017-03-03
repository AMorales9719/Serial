/****************************************************************
**                                                             **
**                          TÏTOL: Repte 2                     **
**                            projecte 2                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
int a = 3;
int b = 4;
int h = 0;


//*********************** SETUP *********************************

void setup()  {              
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps
      Serial.println("Lets calculate a hypoteneuse"); 
      
h = sqrt(a*a + b*b);
        
    
    Serial.print("a = "); 
    Serial.println(a);
    
    Serial.print("b = ");
    Serial.println(b);
    
    Serial.print("h = ");
    Serial.println(h);
    }
}
//************************ LOOP *********************************
void loop() {        // we need this to be here even thoughy its  empty 
  
}
//****************** FUNCIONS ***********************************


