#include<bits/stdc++.h>
#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;
int main()
{


    cout<<"Enter the lexial Number : "<<endl;

    while(1)
    {
    int len,i,cnt=0,ncnt=0;

    //char ch;

    string s;

    getline(cin,s);

    len=s.length();

    for(i=0;i<len;i++)
    {

        if(s[i]>='0' && s[i]<='9')
        {
            ncnt++;
        }

    }
        if((ncnt)==len)
        {


             if(ncnt==len&&s[0]>='0')
            {
                if(len<=4 )
                {
                    cout<<"ShortInt number"<<endl;
                }
                else if(len>4)
                {
                    cout<<"LongInt number"<<endl;
                }
                else{
                cout<<"Undefined"<<endl;
            }

            }

        }



        else if((s[0]>='a'||s[0]>='A'))
        {
            if((s[0]>='i'&&s[0]<='n')||(s[0]>='I'&&s[0]<='N'))
            {
                cnt=0;
                 //cout<<"Character variable"<<endl;
                    for(i=2;i<len;i++)
                    {
                        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
                           {
                               cnt++;
                           }
                    }
                    if(cnt+2==len)
                    {
                        cout<<"Integer variable"<<endl;
                    }
                    else
                    {
                        cout<<"Invalid "<<endl;
                    }

            }


      }
    }
}




