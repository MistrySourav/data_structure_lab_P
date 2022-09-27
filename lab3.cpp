#include <iostream>

using namespace std;

int main()
{
    int i,j;
int arr_1[]={1,4,6,3,6,9,1,5};

int arr_s=8;

cout<<"unique array  :";
for( i=0;i<arr_s;i++)
{

    for( j=0; j<i;j++)

        if(arr_1[i]==arr_1[j])
        break;

        if(i==j)
            cout<<arr_1[i]<<"  ";

}
 return 0;
}
