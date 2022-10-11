#include <iostream>
using namespace std;
int main()
{
    int i,j;
    ///float k;

float arr1[10][3]=
{
    {1223,40,3.2},
    {2,45,3.7},
    {3121,60,3.25},
    {4247,80,3.7},
    {5245,45,3.0},
    {2684,40,3.83},
    {5476,67,3.9},
    {2812,53,3.77},
    {3623,41,3.78},
    {2230,40,3.6}
    };


   for(i=0;i<10;i++)
   {

           if(arr1[i][2]>3.75)
           {
               cout<<"Student ID whose CGPA is more than 3.75 : "<<arr1[i][0]<<endl;
           }

       }
        cout<<endl;
        cout<<endl;

   for(i=0;i<10;i++)
   {

           if(arr1[i][1]>50)
           {
               cout<<"Student ID whose completed 50 cardits : "<<arr1[i][0]<<endl;
           }

       }
return 0;
}

