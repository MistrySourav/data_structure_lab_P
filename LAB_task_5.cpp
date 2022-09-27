#include <iostream>
using namespace std;

int C(int arr[], int n1, int x)
{
    int result = 0;
    for (int i=0; i<n1; i++)
        if (x == arr[i])
          result++;
    return result;
}

int main()
{
    int n[] = {8,4,6,1,6,9,6,1,9,8};
    int n1 = sizeof(n)/sizeof(n[0]);
    cout << "Original array: ";
    for (int i=0; i < n1; i++)
    cout << n[i] <<" ";
    int x1 = 6;
     int x2 = 4;
      int x3 = 8;
       int x4 = 9;
        int x5 = 1;

     cout <<"\n"<<"Number of occurrences of 6 : " << C(n, n1, x1);
      cout <<"\n"<<"Number of occurrences of 4 : " << C(n, n1, x2);
       cout <<"\n"<<"Number of occurrences of 8 : " << C(n, n1, x3);
        cout <<"\n"<<"Number of occurrences of 9 : " << C(n, n1, x4);
         cout <<"\n"<<"Number of occurrences of 1 : " << C(n, n1, x5);
    return 0;
    }
