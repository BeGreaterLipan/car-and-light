#include<Morse.h>
Morse n(13);
char string[200];
int j = 0;
int m = 0;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  for(m=0; Serial.available()>0; m++)
  {
    string[m] = Serial.read();
  }

  for(j = 0; j < m; j++)
  {
    n.to_Morse(string[j], n);
  }
}
void Morse::to_Morse(char input, Morse n)
{
  switch(input)
  {
    case 'a':
      {
        n.dot();
        n.dash();
        break;
      }
    
    case 'b':
      {
        n.dash();
        n.dot();
        n.dot();
        n.dot();
        break;
      }
    
    case 'c':
      {
        n.dash();
        n.dot();
        n.dash();
        n.dot();
        break;
      }
    
    case 'd':
      {
        n.dash();
        n.dot();
        n.dot();
        break;
      }
    
    case 'e':
      {
        n.dot();
        break;
      }
      
    case 'f':
      {
        n.dot();
        n.dot();
        n.dash();
        n.dot();
        break;
      }
    
    case 'g':
      {
        n.dash();
        n.dash();
        n.dot();
        break;
      }
    
    case 'h':
      {
        n.dot();
        n.dot();
        n.dot();
        n.dot();
        break;
      }
      
    case 'i':
      {
        n.dot();
        n.dot();
        break;
      }
      
    case 'j':
      {
        n.dot();
        n.dash();
        n.dash();
        n.dash();
        break;
      }
      
    case 'k':
      {
        n.dash();
        n.dot();
        n.dash();
        break;
      }
    
    case 'l':
      {
        n.dot();
        n.dash();
        n.dot();
        n.dot();
        break;
      }
      
    case 'm':
      {
        n.dash();
        n.dash();
        break;
      }
      
    case 'n':
      {
        n.dash();
        n.dot();
        break;
      }
      
    case 'o':
      {
        n.dash();
        n.dash();
        n.dash();
        break;
      }
      
    case 'p':
      {
        n.dot();
        n.dash();
        n.dash();
        n.dot();
        break;
      }
      
    case 'q':
      {
        n.dash();
        n.dash();
        n.dot();
        n.dash();
        break;
      }
      
    case 'r':
      {
        n.dot();
        n.dash();
        n.dot();
        break;
      }
      
    case 's':
      {
        n.dot();
        n.dot();
        n.dot();
        break;
      }
      
    case 't':
      {
        n.dash();
        break;
      }
    
    case 'u':
      {
        n.dot();
        n.dot();
        n.dash();
        break;
      }
      
    case 'v':
      {
        n.dot();
        n.dot();
        n.dot();
        n.dash();
        break;
      }
      
    case 'w':
      {
        n.dot();
        n.dash();
        n.dash();
        break;
      }
      
    case 'x':
      {
        n.dash();
        n.dot();
        n.dot();
        n.dash();
        break;
      }
      
    case 'y':
      {
        n.dash();
        n.dot();
        n.dash();
        n.dash();
        break;
      }
      
    case 'z':
      {
        n.dash();
        n.dash();
        n.dot();
        n.dot();
        break;
      }
    
    case ' ':
      {
        n.w_space();
        break;
      }
      
    default: break;
      
  }
}
