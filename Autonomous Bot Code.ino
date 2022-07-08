int flag;     // for LED
int speed_mode=0,horn_val=0;
void setup()  {
  
  Serial.begin(9600);
  pinMode(5,OUTPUT);  //left_motor(2)
  pinMode(9,OUTPUT);  //left_motor(3)
  pinMode(3,OUTPUT);  //right_motor(4)
  pinMode(6,OUTPUT);  //right_motor(5)
  
  pinMode(10,OUTPUT); //LED-F-left
  pinMode(12,OUTPUT); //LED-F-right
  pinMode(8,OUTPUT); //LED-B-left
  pinMode(7,OUTPUT); //LED-B-right 

  pinMode(4,OUTPUT); //Horn // change from 4 to 11 when using with slider
  pinMode(2,OUTPUT); //Horn
  
}

void bot_movement(int x)
{  
  
  switch(x)
      {
        //Backward
        case 'B':   if(flag==1)
                   {
                    digitalWrite(8,HIGH);
                    digitalWrite(7,HIGH);
                    digitalWrite(10,LOW);
                    digitalWrite(12,LOW);
                   }
                    
                    if(speed_mode==10)
                    {
                      //analogWrite(3,255); analogWrite(9,255); //Serial.println("speed_mode 1");
                      digitalWrite(9,HIGH); //left motor  
                      digitalWrite(5,LOW);  //left motor
                      digitalWrite(3,HIGH); //right motor
                      digitalWrite(6,LOW); //right motor 
                    }
                    if(speed_mode==0)
                    {
                      analogWrite(3,0); analogWrite(9,0); analogWrite(5,0); analogWrite(6,0);
                    }
                     if(speed_mode>=1 && speed_mode<=4)
                    {
                      analogWrite(3,90); analogWrite(9,90); analogWrite(5,0); analogWrite(6,0);
                    }
                     if(speed_mode>=5 && speed_mode<=9)
                    {
                      analogWrite(3,180); analogWrite(9,180); analogWrite(5,0); analogWrite(6,0);
                    }
                    
                    break;
        
        //Forward
        case 'F':   
                    if(flag==1)
                    {
                        digitalWrite(8,LOW);
                        digitalWrite(7,LOW);
                        digitalWrite(10,HIGH);
                        digitalWrite(12,HIGH);
                    }
                    if(speed_mode==10)
                    {  
                     // analogWrite(5,255); analogWrite(6,255);
                      digitalWrite(9,LOW); //left motor  
                      digitalWrite(5,HIGH);  //left motor
                      digitalWrite(3,LOW); //right motor
                      digitalWrite(6,HIGH);  //right motor 
                    }
                    if(speed_mode==0)
                    {
                      analogWrite(3,0); analogWrite(9,0); analogWrite(5,0); analogWrite(6,0);
                    }
                     if(speed_mode>=1 && speed_mode<=4)
                    {
                      analogWrite(5,90); analogWrite(6,90); analogWrite(9,0); analogWrite(3,0);
                    }
                     if(speed_mode>=5 && speed_mode<=9)
                    {
                      analogWrite(5,180); analogWrite(6,180); analogWrite(9,0); analogWrite(3,0);
                    }
                      
                    break;
        
        //left
        case 'L':   
                     if(flag==1)
                     {
                        digitalWrite(8,HIGH);
                        digitalWrite(7,LOW);
                        digitalWrite(10,HIGH);
                        digitalWrite(12,LOW);
                     }

                     if(speed_mode==10)
                    {  
                      //analogWrite(9,255); analogWrite(6,255);
                      digitalWrite(9,HIGH); //left motor  
                      digitalWrite(5,LOW);  //left motor
                      digitalWrite(3,LOW); //right motor
                      digitalWrite(6,HIGH);  //right motor 
                    }
                     if(speed_mode==0)
                    {  
                      analogWrite(9,0); analogWrite(6,0); analogWrite(5,0); analogWrite(3,0);
                    }
                     if(speed_mode>=1 && speed_mode<=4)
                    {
                      analogWrite(5,0); analogWrite(6,90); analogWrite(9,90); analogWrite(3,0);
                    }
                     if(speed_mode>=5 && speed_mode<=9)
                    {
                      analogWrite(5,0); analogWrite(6,180); analogWrite(9,180); analogWrite(3,0);
                    }
                    
                    break;

         //F-left
        case 'G':   
                    if(flag==1)
                    {
                      digitalWrite(8,HIGH);
                      digitalWrite(7,LOW);
                      digitalWrite(10,HIGH);
                      digitalWrite(12,LOW);
                    }
                    if(speed_mode==10)
                    {  
                      //analogWrite(9,255); analogWrite(6,255);
                      digitalWrite(9,HIGH); //left motor  
                      digitalWrite(5,LOW);  //left motor
                      digitalWrite(3,LOW); //right motor
                      digitalWrite(6,HIGH);  //right motor 
                    }
                     if(speed_mode==0)
                    {  
                      analogWrite(9,0); analogWrite(6,0); analogWrite(5,0); analogWrite(3,0);
                    }
                     if(speed_mode>=1 && speed_mode<=4)
                    {
                      analogWrite(5,0); analogWrite(6,90); analogWrite(9,90); analogWrite(3,0);
                    }
                     if(speed_mode>=5 && speed_mode<=9)
                    {
                      analogWrite(5,0); analogWrite(6,180); analogWrite(9,180); analogWrite(3,0);
                    }
                    break;
        
             

         //B-Right(simple left)
        case 'J':    if(flag==1)
                    {
                      digitalWrite(8,LOW);
                      digitalWrite(7,HIGH);
                      digitalWrite(10,LOW);
                      digitalWrite(12,HIGH);
                    }

                     if(speed_mode==10)
                    {  
                     // analogWrite(9,255); analogWrite(3,0);
                      digitalWrite(9,HIGH); //left motor  
                      digitalWrite(5,LOW);  //left motor
                      digitalWrite(3,LOW); //right motor
                      digitalWrite(6,LOW);  //right motor 
                    }
                     if(speed_mode==0)
                    {  
                      analogWrite(9,0); analogWrite(3,0); analogWrite(6,0); analogWrite(5,0);
                    }
                     if(speed_mode>=1 && speed_mode<=4)
                    {
                      analogWrite(5,0); analogWrite(6,0); analogWrite(9,90); analogWrite(3,0);
                    }
                     if(speed_mode>=5 && speed_mode<=9)
                    {
                      analogWrite(5,0); analogWrite(6,0); analogWrite(9,180); analogWrite(3,0);
                    }
                    break;
        //right
        case 'R':   if(flag==1)
                    {
                      digitalWrite(8,LOW);
                      digitalWrite(7,HIGH);
                      digitalWrite(10,LOW);
                      digitalWrite(12,HIGH);
                    }

                     if(speed_mode==10)
                    {  
                      //analogWrite(3,255); analogWrite(5,255);
                      digitalWrite(9,LOW); //left motor  
                      digitalWrite(5,HIGH);  //left motor
                      digitalWrite(3,HIGH); //right motor
                      digitalWrite(6,LOW);  //right motor 
                    }
                     if(speed_mode==0)
                    {  
                      analogWrite(3,0); analogWrite(5,0); analogWrite(9,0); analogWrite(6,0);
                    }
                     if(speed_mode>=1 && speed_mode<=4)
                    {
                      analogWrite(5,90); analogWrite(6,0); analogWrite(9,0); analogWrite(3,90);
                    }
                     if(speed_mode>=5 && speed_mode<=9)
                    {
                      analogWrite(5,180); analogWrite(6,0); analogWrite(9,0); analogWrite(3,180);
                    }
        
                    break;

         
        //F-Right
        case 'I':    
                    if(flag==1)
                    {
                      digitalWrite(8,LOW);
                      digitalWrite(7,HIGH);
                      digitalWrite(10,LOW);
                      digitalWrite(12,HIGH);
                    }
                     if(speed_mode==10)
                    {  
                      //analogWrite(3,255); analogWrite(5,255);
                     digitalWrite(9,LOW); //left motor  
                      digitalWrite(5,HIGH);  //left motor
                      digitalWrite(3,HIGH); //right motor
                      digitalWrite(6,LOW);  //right motor 
                    }
                     if(speed_mode==0)
                    {  
                      analogWrite(3,0); analogWrite(5,0); analogWrite(9,0); analogWrite(6,0);
                    }
                     if(speed_mode>=1 && speed_mode<=4)
                    {
                      analogWrite(5,90); analogWrite(6,0); analogWrite(9,0); analogWrite(3,90);
                    }
                     if(speed_mode>=5 && speed_mode<=9)
                    {
                      analogWrite(5,180); analogWrite(6,0); analogWrite(9,0); analogWrite(3,180);
                    }
                      
                    break;

        //B-Left(simple right)
        case 'H':   if(flag==1)
                    {
                      digitalWrite(8,HIGH);
                      digitalWrite(7,LOW);
                      digitalWrite(10,HIGH);
                      digitalWrite(12,LOW);
                    }
 

                
                      if(speed_mode==10)
                    {  
                      //analogWrite(3,255); analogWrite(5,0);
                     digitalWrite(9,LOW); //left motor  
                      digitalWrite(5,LOW);  //left motor
                      digitalWrite(3,HIGH); //right motor
                      digitalWrite(6,LOW);  //right motor 
                    }
                     if(speed_mode==0)
                    {  
                      analogWrite(3,0); analogWrite(5,0); analogWrite(9,0); analogWrite(6,0);
                    }
                     if(speed_mode>=1 && speed_mode<=4)
                    {
                      analogWrite(5,0); analogWrite(6,0); analogWrite(9,0); analogWrite(3,90);
                    }
                     if(speed_mode>=5 && speed_mode<=9)
                    {
                      analogWrite(5,0); analogWrite(6,0); analogWrite(9,0); analogWrite(3,180);
                    }   
                    break;

         //Stop
         case 'S':   digitalWrite(9,LOW); //left motor  
                     digitalWrite(5,LOW);  //left motor
                     digitalWrite(3,LOW); //right motor
                     digitalWrite(6,LOW);  //right motor
                     break;

          //F-L-on
          case 'W':  digitalWrite(10,HIGH);        //left
                     digitalWrite(12,HIGH); break;  //right

           //F-L-off
          case 'w':  digitalWrite(10,LOW);           //left
                     digitalWrite(12,LOW); break;      //right

          //B-L-on
          case 'U':  digitalWrite(8,HIGH);            //left
                     digitalWrite(7,HIGH); break;    //right


          //B-L-off
          case 'u':  digitalWrite(8,LOW);             //left
                     digitalWrite(7,LOW);  break;    //right

          //Parking-led-on
          case 'X':       flag=1;
                          digitalWrite(10,HIGH);           //left
                          digitalWrite(12,HIGH);           //right
                          digitalWrite(8,HIGH);            //left
                          digitalWrite(7,HIGH);  break;    //right   


          //Parking-led-off
          case 'x':  
                      flag=0;
                     digitalWrite(10,LOW);       //left
                     digitalWrite(12,LOW);       //right
                     digitalWrite(8,LOW);        //left
                     digitalWrite(7,LOW); break; //right



           case '0': speed_mode=0; horn_val=0; break;
           case '1': speed_mode=1; horn_val=25.5*1; break;
           case '2': speed_mode=2; horn_val=25.5*2; break;
           case '3': speed_mode=3; horn_val=25.5*3; break;
           case '4': speed_mode=4; horn_val=25.5*4; break;
           case '5': speed_mode=5; horn_val=25.5*5; break;
           case '6': speed_mode=6; horn_val=25.5*6; break;
           case '7': speed_mode=7; horn_val=25.5*7; break;
           case '8': speed_mode=8; horn_val=25.5*8; break;
           case '9': speed_mode=9; horn_val=25.5*9; break;
           case 'q': speed_mode=10; horn_val=25.5*10; break;

           //Horn
           case 'V': 
           digitalWrite(4,HIGH); digitalWrite(2,LOW); break; //Horn-On
           //analogWrite(11,horn_val); digitalWrite(2,LOW); break; //use_horn val for thev slider and change pin from 4 to 11
           case 'v': 
           digitalWrite(4,LOW); digitalWrite(2,LOW); break; //Horn-Off
           
      default:break;
      }
}





void loop() 
{
   //exchange 3 and 2 && 5 and 4 to change the direction (forward)

  if(Serial.available()>0)
  { 
      char x = Serial.read();
      Serial.println(x);

       bot_movement(x);
        
  }
  

}
