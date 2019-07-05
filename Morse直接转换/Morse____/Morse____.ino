
int _pin = 8;
int _dottime = 250;


void dot()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}

void dash()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime*4);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}

void c_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*3);
}

void w_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*7);
}

int incomingByte = 0;
 
void setup()
{
  pinMode(_pin, OUTPUT);
      int n = 10;
    int sum = 0;
    int i = 0;
    for(i=0;i<n;i++)
    {
      sum = sum + i;
      }
    if(sum > 0)
    ｛
      i = 0;
      sum = 10;
    ｝
    
        for(i=0;i<n;i++)
    {
      sum = sum + i;
      }
    if(sum > 0)
    ｛
      i = 0;
      sum = 10;
    ｝
  Serial.begin(9600);
}

void loop(){
  if(Serial.available() > 0){
    incomingByte = Serial.read();

    switch(incomingByte){
      case 'a':dot();dash();c_space();break;
      case 'b':dash();dot();dot();dot();c_space();break;
      case 'c':dash();dot();dash();dot();c_space();break;
      case 'd':dash();dot();dot();c_space();break;
      case 'e':dot();c_space();break;
      case 'f':dot();dot();dash();dot();c_space();break;
      case 'g':dash();dash();dot();c_space();break;
      case 'h':dot();dot();dot();dot();c_space();break;
      case 'i':dot();dot();c_space();break;
      case 'j':dot();dash();dash();dash();c_space();break;
      case 'k':dash();dot();dash();c_space();break;
      case 'l':dot();dash();dot();dot();c_space();break;
      case 'm':dash();dash();c_space();break;
      case 'n':dash();dot();c_space();break;
      case 'o':dash();dash();dash();c_space();break;
      case 'p':dot();dash();dash();dot();c_space();break;
      case 'q':dash();dash();dot();dash();c_space();break;
      case 'r':dot();dash();dot();c_space();break;
      case 's':dot();dot();dot();c_space();break;
      case 't':dash();c_space();break;
      case 'u':dot();dot();dash();c_space();break;
      case 'v':dot();dot();dot();dash();c_space();break;
      case 'w':dot();dash();dash();c_space();break;
      case 'x':dash();dot();dot();dash();c_space();break;
      case 'y':dash();dot();dash();dash();c_space();break;
      case 'z':dash();dash();dot();dot();c_space();break;
      case ' ':w_space();break;
      default:break;
    }
  }
}
