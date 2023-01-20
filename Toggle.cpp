#include<iostream>
using namespace std;

class StringX
{
     public:
        void StrtoggleX(char *str,char *dest)
        {
          while(*str!='\0')
           {
              if((*str>='A')&&(*str<='Z'))
               {
                  *dest=*str+32;
               }
              else if((*str>='a')&&(*str<='z'))
               {
                 *dest=*str-32;
               }
              else
               {
                 *dest=*str;
               }
              str++;
              dest++;
           }
          *dest='\0';
       }
};

//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    char Brr[30];

    cout<<"Please Enter the String:"<<endl;
    cin>>Arr;
    
    StringX obj();

    obj.StrtoggleX(Arr,Brr);  //(100) call by Address

    cout<<"Upper case Letter:"<<Brr<<endl;

    return 0;
}