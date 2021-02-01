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
  
    
  for(i; s;)
  {
   while(digitalRead(2)==0){}  
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
      
  }
  }