//Write a class string that can be used to store strings, add strings, equate strings, output strings.
#include<iostream>
#include<cstring>
using namespace std;
class string_program
{
   private:
   char a[20],b[20],c[40];
   public :
   string_program(char *m,char *n)
   {
     int i=0;
     while(m[i]!='\0'){
         a[i]=m[i];
         i++;
     }
        a[i]=0;
    i=0;
     while(n[i]!='\0'){
         b[i]=n[i];
         i++;
     }
        b[i]=0;
   }
   
   string get_string1()
   {
     return a;
   }
   string get_string2(){
       return b;
   }
   string add_getter()
   {    
       strcpy(c,a);
       strcat(c,b);
       return c;
   }


   void equate()
   {
       int c;
       c=strcmp(a,b);
       if(c>0)
       cout<<"\n"<<a<<" STRING IS GREATER";
       else if(c==0)
       cout<<"\n\nBOTH STRINGS ARE EQUAL";
       else
       cout<<endl<<b<<" STRING IS GREATER ";

   }
  
};
int main()
{
  char m[20],n[20];
    cout<<"ENTER STRING 1 TO BE STORED :";
    gets(m);
    cout<<"ENTER STRING 2 TO BE STORED :";
    gets(n);

  string_program obj(m,n);
  int a=0;
  while(a!=5)
  {
  cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  cout<<"\t\t\t\t\t\tCHOOSE AN OPERATION TO BE PERFORMED\n\n\t1.ADD STRINGS\t\t 2.COMPARE STRINGS \t\t3.DISPLAY STRING \t4.EXIT ";
  cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
  cout<<"\nYOUR INPUT : ";
  cin>>a;
  switch(a)
  {
    
    case 1:
    cout<<"\nTHE RESULTANT STRING IS :"<<obj.add_getter();
    break;

    case 2:
    obj.equate();
    break;

    case 3:
    cout<<"\nSTRING 1 IS :"<<obj.get_string1()<<endl;
    cout<<"\nSTRING 2 IS :"<<obj.get_string2()<<endl;
    break;
    
    case 4:
    return 0;

  }
  }
  
  return 0;

}