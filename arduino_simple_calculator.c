#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd (13,8,9,10,11,12);



int WelcomeText(){
lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.write("Hello!");
  delay(350);
  lcd.setCursor(0,1);
  lcd.write("I'm a calcuator.");
  delay(1750);
  lcd.clear();
  delay(1000);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("Press...");
  delay(750);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("'A' to add");
  delay(500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("'B' to subtract");
  delay(500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("'C' to multiply");
  delay(500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("'D' to divide");
  delay(500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.write("Then...");
  delay(500);
  lcd.setCursor(0,1);
  lcd.write("Enter 2 numbers.");
  delay(600);
  lcd.clear();
  
  
  
  
};

int Addition(int x, int y){
  		lcd.begin(16,2);
  		lcd.clear();
  		lcd.setCursor(0,0);
  		lcd.print(x, DEC);
  		lcd.setCursor(2,0);
  		lcd.write("+");
  		lcd.setCursor(4,0);
  		lcd.print(y, DEC);
  		lcd.setCursor(6,0);
  		lcd.write("=");
  		int z;
  		z = x+y;
		lcd.setCursor(8,0);
		lcd.print(z,DEC);
}





int Subtraction (int x, int y){
  		lcd.begin(16,2);
  		lcd.clear();
  		lcd.setCursor(0,0);
  		lcd.print(x, DEC);
  		lcd.setCursor(2,0);
  		lcd.write("-");
  		lcd.setCursor(4,0);
  		lcd.print(y, DEC);
  		lcd.setCursor(6,0);
  		lcd.write("=");
  		int z;
  		z = x-y;
		lcd.setCursor(8,0);
		lcd.print(z,DEC);
}





int Multiplication (int x, int y){
  		lcd.begin(16,2);
  		lcd.clear();
  		lcd.setCursor(0,0);
  		lcd.print(x, DEC);
  		lcd.setCursor(2,0);
  		lcd.write("*");
  		lcd.setCursor(4,0);
  		lcd.print(y, DEC);
  		lcd.setCursor(6,0);
  		lcd.write("=");
  		int z;
  		z = x*y;
		lcd.setCursor(8,0);
		lcd.print(z,DEC);
}





int Division (int x, int y){
  		lcd.begin(16,2);
  		lcd.clear();
  		lcd.setCursor(0,0);
  		lcd.print(x, DEC);
  		lcd.setCursor(2,0);
  		lcd.write("/");
  		lcd.setCursor(4,0);
  		lcd.print(y, DEC);
  		lcd.setCursor(6,0);
  		lcd.write("=");
  		int z;
  		z = x/y;
		lcd.setCursor(8,0);
		lcd.print(z,DEC);
}




void setup() {

  
    WelcomeText();
  
}

const byte rows =4;
const byte cols =4;

char keys[rows][cols]={
{1,2,3,'A'},
{4,5,6,'B'},
{7,8,9,'C'},
{0,0,0,'D'}
};

byte rowPins[rows] = {0,1,2,3};
byte colPins[cols] = {4,5,6,7};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);
  


void loop(){

  
 
  
  
  
  
  int a;
  int b;
  int Operator;

  Operator = keypad.getKey(); 
  

  while (Operator != NO_KEY) {
    
    
  if (Operator == 'A'){
     
a = keypad.getKey();
  if (a != NO_KEY){
    do {
    b = keypad.getKey();
    }while (b == NO_KEY);
		Addition(a,b);
		delay(100);
  }
  }
    
    
    
     else if (Operator == 'B'){
a = keypad.getKey();
  if (a != NO_KEY){
    do {
    b = keypad.getKey();
    }while (b == NO_KEY);
		Subtraction(a,b);
		delay(100);
  }
  }
        
        
        else if (Operator == 'C'){
a = keypad.getKey();
  if (a != NO_KEY){
    do {
    b = keypad.getKey();
    }while (b == NO_KEY);
		Multiplication(a,b);
		delay(100);
  } 
  }
  
        
          
      else if (Operator == 'D'){
a = keypad.getKey();
  if (a != NO_KEY){
    do {
    b = keypad.getKey();
    }while (b == NO_KEY);
		Division(a,b);
		delay(100);
  }
  }  
        
    else{
    lcd.begin(16,2);
  		lcd.clear();
  		lcd.setCursor(0,0);
  		lcd.write("Invalid Operator");
      delay(10000);
    }
        
        
        
        
  }  
        
        

}
