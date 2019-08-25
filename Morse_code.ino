int dot=100;  // duration of dot
int dash=300;  //duration of dash
int freq=1200;   //operating frequency of speaker
int speak=8;    // pin number of arduino 
char str[]="sos"; // string you have to convert
void setup() {
  pinMode(speak,OUTPUT); // pin is saved for output
}
void fdot(int n)          // function for making dot sound consecutively n times 
  {
    for(int i=0;i<n;i++)
    {
    tone(speak,freq,dot);
    delay(dot);
    noTone(speak);
    delay(dot);
    }
  } 
  void fdash(int n)     // function for making dash sound consecutively n times 
  { for(int i=0;i<n;i++)
    {tone(speak,freq,dash);
    delay(dash);
    noTone(speak);
    delay(dot);
    }
  }
  void cov()          //  interval to differentiate between two characters
  {
    delay(200);
  }
  void space()       // interval to differentiate between two words
  {
    delay(700);
  }
void loop() {
  int i;
  char ch;
  
  for(i=0;str[i]!='\0';i++)     // for acessing the character of the string
  {
    ch=str[i];
    switch(ch)                  // for converting the character to its corresponding morse code
    {
      case 'a': fdot(1);
                fdash(1);
                fdot(1);
                cov();
                break;
      case 'b': fdash(1);
                fdot(3);
                cov();
                break;
      case 'c': fdash(1);
                fdot(1);
                fdash(1);
                fdot(1); 
                cov();
                break;
      case 'd': fdash(1);
                fdot(2);
                //fdot();  
                cov();
                break;
       case 'e':fdot(1); 
                cov();
                break;
       case 'f': fdot(2);
                 fdash(1);
                 fdot(1); 
                 cov();
                 break;
       case 'g': fdash(2);
                 fdot(1);
                 cov();
                 break;
       case 'h': fdot(4); 
                cov();
                break;
       case 'i': fdot(2); 
                cov();
                break;
       case 'j': fdot(1);
                 fdash(3); 
                cov();
                break;
       case 'k':fdash(1);
                fdot(1);
                fdash(1); 
                cov();
                break;
        case 'l': fdot(1);
                  fdash(1);
                  fdot(2);  
                  cov();
                  break;
        case 'm': fdash(2);
                  cov();
                  break;
        case 'n': fdash(1);
                  fdot(1); 
                  cov();
                  break;
         case 'o': fdash(3); 
                  cov();
                  break;
        case 'p': fdot(1);
                  fdash(2);
                  fdot(1); 
                  cov();
                  break;
        case 'q': fdash(2);
                  fdot(1);
                  fdash(1); 
                  cov();
                  break;
        case 'r': fdot(1);
                  fdash(1);
                  fdot(1); 
                  cov();
                  break;
       case 's' : fdot(3); 
                  cov();
                  break;
       case 't': fdash(1);
                 cov();
                 break;
       case 'u': fdot(2);
                  fdash(1);
                  cov();
                  break;
       case 'v':  fdot(3);
                  fdash(1);
                  cov();
                  break;
       case 'w': fdot(1);
                  fdash(2); 
                  cov();
                  break;
       case 'x':fdash(1);
                fdot(2);
                fdash(1);
                cov();
                break;
       case 'y': fdash(1);
                  fdot(1); 
                  fdash(2);
                  cov();
                  break;
        case 'z': fdash(2);
                  fdot(2);
                  cov();
                  break;
        case ' ': space(); 
                  break;
        case '1':fdot(1);
                 fdash(4);
                 cov();
                 break;
        case '2':fdot(2);
                 fdash(3);
                 cov();
                 break;
        case '3':fdot(3);
                 fdash(2);
                 cov();
                 break;
        case '4':fdot(4);
                 fdash(1);
                 cov();
                 break;
        case '5':fdot(5);
                 cov();
                 break;
        case '6': fdash(1);
                  fdot(4);
                  cov();
                  break;
        case '7': fdash(2);
                  fdot(3);
                  cov();
                  break;
        case '8': fdash(3);
                  fdot(2);
                  cov();
                  break;
        case '9': fdash(4);
                  fdot(1);
                  cov();
                  break;
        case '0': fdash(5);
                  cov();
                  break;       
    }
  }
}
