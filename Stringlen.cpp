#include<iostream>
using namespace std;

class StringX
{
    public:
    char *str;

    StringX()
    {
        str=new char;
    }
   
    int  StrlenX()
    {
        int iCnt=0;
        while(*str!='\0')
        {
            iCnt++;
            str++;
        }
        return iCnt;
    }
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"Please enter the String:"<<endl;
    cin>>Arr;

    StringX obj;

    iRet=obj.StrlenX();
    cout<<iRet<<endl;

    return 0;

}