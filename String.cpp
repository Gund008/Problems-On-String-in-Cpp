
#include<iostream>
using namespace std;

bool strcmpX(char *src,char *dest)
{  
    while((*src!='\0')&&(*dest!='\0'))
    {
        if(*src!=*dest)
        {
            break;
        }   
        src++;
        dest++;
    }

    if((*src=='\0')&&(*dest=='\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[40];
    char Brr[30];
    bool bRet=false;

    cout<<"Please Enter the First String:"<<endl;
    cin>>Arr;

    cout<<"Please Enter the Second String:"<<endl;
    cin>>Brr;

    bRet=strcmpX(Arr,Brr);   //(100,200)

    if(bRet==true)
    {
        cout<<"String are Equal:"<<endl;
    }
    else
    {
        cout<<"String are Not Equal:"<<endl;
    }

    return 0;

}