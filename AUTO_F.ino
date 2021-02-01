int vs=100;
int x=-1;
int i=13;
int s=4;

void setup()
{
  for(int l=4; l<=13; l++)
  {
  pinMode(l, OUTPUT);  
  }
  pinMode(2, INPUT);
}

void loop()
{ 
  
  while(digitalRead(2)==0){}
  while(digitalRead(2)==1){}
  for(i; s;)
  {    
   digitalWrite(i, 1);
    delay(vs);
   digitalWrite(i, 0);
   i+=x;
       
    if(i==4)
	{
      i=4;
      s=13;
      x=1;
	}
    
	if(i==13)
	{
       i=13;
       s=4;          
       x=-1;          
	}
    if(digitalRead(2)==1)
	{
          
       break;       
	}
    
  }
    
  while(digitalRead(2)==1){
  for(int l=4; l<=13; l++)
  {
  digitalWrite(l, 0);  
  }
  i=13;
  s=4;          
  x=-1;
  }
  
}