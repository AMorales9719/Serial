/****************************************************************
**                                                             **
**                          TÏTOL: Repte 2                     **
**                            projecte 8                       **
**                                                             **
** NOM: Andrés Morales Bacilio                DATA:02/01/2017  **
****************************************************************/
//********************* VARIABLES *******************************
int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
            

//*********************** SETUP *********************************

void setup()  {               // run once, when the sketch starts
 {
    Serial.begin(9600);       // set up Serial library at 9600 bps
    
      Serial.print("Your HD is "); 
      Serial.print(drive_gb);
      Serial.print(" GB large ");

      drive_mb = drive_gb;
      drive_mb = drive_mb * 1024;

      Serial.println();

      Serial.print("In theory, it can store ");
      Serial.print(drive_mb);
      Serial.print(" Megabytes,");
      
      drive_kb = drive_gb;
      drive_kb = drive_kb * 1024 * 1024;
     
      Serial.print(drive_kb);
      Serial.print(" Kilobytes.");

      Serial.println();
      
      real_drive_mb = drive_gb;
      real_drive_mb = real_drive_mb * 1000;

      Serial.print("But it really only stores ");
      Serial.print(real_drive_mb);
      Serial.print(" Megabytes, ");

      real_drive_kb = drive_gb;
      real_drive_kb = real_drive_kb * 1000 * 1000;

      Serial.print(real_drive_kb);
      Serial.print(" Kilobytes ");

      Serial.println();
      
      Serial.print("You're missing ");
      Serial.print(drive_kb - real_drive_kb);
      Serial.print(" Kilobytes!");
      }
}
//************************ LOOP *********************************
void loop() {        // we need this to be here even thoughy its  empty 
}

//****************** FUNCIONS ***********************************


