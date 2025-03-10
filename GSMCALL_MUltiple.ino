#include <SoftwareSerial.h> // Include the SoftwareSerial library

SoftwareSerial gsm(2, 3); // Create a SoftwareSerial object for the GSM module
//int bluelight = 12;

void setup() {
  Serial.begin(9600); // Start serial communication
  gsm.begin(9600); // Start GSM communication
 
}

void loop() {

  // for primary number Message and phone call
     gsm.println("AT+CMGF=1"); 
 delay(1000);
gsm.println("AT+CMGS=\"+01704892220\""); 
  delay(1000);
  
  gsm.println("Hello, Servers are at risk"); 
  
gsm.write(26); 
  delay(25000);   
    gsm.println("ATD+8801704892220;") ;
     delay (35000);
    
   // for secondary number message and phone call          

gsm.println("AT+CMGF=1"); 
 delay(1000);
gsm.println("AT+CMGS=\"+01817522270\""); 
  delay(1000);
  
  gsm.println("Hello, Servers are at risk, Hurry Up"); 
  
gsm.write(26); 
  delay(25000);   
    gsm.println("ATD+8801817522270;") ;
     delay (35000);
    

  
}
