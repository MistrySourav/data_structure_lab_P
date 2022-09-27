#include <iostream>

using namespace std;




    int main ()
    {
        int i,k,n;
       int arr_1[10]={0,1,2,3,4,5,6,7,8,9};
        int arr_2[6]={5,3,7,12,13,14};
        int C[16];
        for( i=0;i<10;i++)
        {
            for( k=0;k<6;k++)
            {


                if(arr_1[i]==arr_2[k])
                {
                    C[i]=arr_1[i];
                    cout<<C[i]<<"   ";
                    n=1;
                }
            }

        }
        if(n!=1)
        {
            cout<<"no common element"<<endl;
        }

    return 0;
}


