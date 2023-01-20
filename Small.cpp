#include<iostream>
using namespace std;

class StringX
{
    public:
        void StrCpySmallX(char *str,char *dest )
       {
          while(*str!='\0')
           {
              if((*str>='A')&&(*str<='Z'))
               {
                  *dest=*str + 32;
               }
              else
              {
                  *dest=*str;
              }
             str++;
             dest++;
             *dest='\0';
            }
        }
};

///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50];
    char Brr[40];

    cout<<"Please Enter the String:"<<endl;
    cin>>Arr;

    StringX obj;
    obj.StrCpySmallX(Arr,Brr);
    
    cout<<"After String:"<<Arr<<endl;
    cout<<"before string:"<<Brr<<endl;

    return 0;
}