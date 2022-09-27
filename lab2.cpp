#include <iostream>

using namespace std;

int main()
{   int i;
   int arr_1[]={10,20,30,40,50};

   int arr_2[]={1,2,3,4,5,6,7,8};

   int arr_3[13];
   int arr_11=5;
   int arr_22=8;


   for(i=0;i<arr_11;i++)
   {
       arr_3[i]=arr_1[i];
   }
   for(i=0;i<arr_22;i++)
   {

       arr_3[i+5]=arr_2[i];
   }
   for(i=12;i>=0;i--)
   {

       cout<<arr_3[i]<<"   ";
   }


    return 0;
}

