// Pin girişleri tanımları
int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;
int led5 = 9;

int buton1 = 2;
int buton2 = 3;
int buton3 = 4;


void setup(){
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT); 
  
  pinMode(buton1, INPUT);
  pinMode(buton2, INPUT);
  pinMode(buton3, INPUT);
  
}

void loop() {
  if(digitalRead(buton1)==1){
    
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
  
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
  
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led3, LOW);
  
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led4, LOW);
  
    digitalWrite(led5, HIGH);
    delay(1000);
    digitalWrite(led5, LOW);
  }
  else if(digitalRead (buton2)==1){
    digitalWrite(led5, HIGH);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(1000);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    
  }
  else if(digitalRead (buton3)==1){
    for(int i=1; i<=10; i++){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      digitalWrite(led5, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      digitalWrite(led5, LOW);
      delay(500);

  
    }
  } 
}
