#include <iostream>
using namespace std;
int main()
{
    int i,j;
    ///float k;

float arr1[10][3]=
{
    {201,40,3.2},
    {202,45,3.7},
    {206,60,3.25},
    {261,80,3.7},
    {299,45,3.0},
    {291,40,3.33},
    {286,67,3.9},
    {277,53,3.75},
    {296,41,3.78},
    {21,40,3.6}
    };


   for(i=0;i<10;i++)
   {
       for(j=0;j<3;j++)
       {
           if(arr1[i][j]>3.75)
           {
               cout<<arr1[i][j];
           }
           cout<<endl;
       }
   }
return 0;
}

