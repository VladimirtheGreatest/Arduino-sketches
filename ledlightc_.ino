//this code accepts input from my console application, it will turn the led on and off based on the input from the user
int data;  
void setup() {  
    Serial.begin(9600);  
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
     delay(1000);
}  
void loop() {  
    if (Serial.available()) {  
        data = Serial.read();  
        if (data == 'A') {  
             digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
             delay(1000);
        } else {  
              digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
              delay(1000);    
        }  
    }  
}
