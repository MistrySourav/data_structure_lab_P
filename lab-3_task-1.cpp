#include <iostream>
using namespace std;
int main()
{
    int i,j,arr1[3][4]={{1,6,7,9},{2,4,8,5},{3,1,9,4}};

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
           //cout<<arr1[i][j]<<"";
           cout<<arr1[j][i]<<" ";

        }
        cout<<endl;
    }

    return 0;
}
