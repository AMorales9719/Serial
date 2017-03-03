/****************************************************************
**                                                             **
**                          TÏTOL: Repte 2                     **
**                            projecte 1                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
int a = 5;
int b = 10;
int c = 20;


//*********************** SETUP *********************************

void setup()  {               // run once, when the sketch starts
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps
      Serial.println("Here is some match: ");   
    
    Serial.print("a = "); 
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
    Serial.print("c = ");
    Serial.println(c);

    Serial.print ("a + b = ");
    Serial.println(a + b);      //add

    Serial.print("a * c = ");       //multiply
    Serial.println(a * c);

    Serial.print("c / b = ");       //divide
    Serial.println(c / b);

    Serial.print("c % b = ");        //module
    Serial.println(c % b );

    Serial.print("b - c = ");       //subtract
    Serial.println(b - c);
    }
}
//************************ LOOP *********************************
void loop() {        // we need this to be here even thoughy its  empty 
  
}
//****************** FUNCIONS ***********************************


