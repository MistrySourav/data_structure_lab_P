#include<iostream>
using namespace std;

string encode(string s,int j)
{
    string s1;



    for(int i=2;i<s.length();i+=j)
    {
       int a=int (s[i]);

       s1[i]=char(a+2);

       s[i]=s1[i];

       i+=1;
    }
    return s;
}

int main()
{
    string str = "I am a Student";

    string s1 = encode(str,2);


    for(int i=0;i<str.length();i++)
    {

        cout<<s1[i];

    }

    cout<<endl;

    return 0;
}
