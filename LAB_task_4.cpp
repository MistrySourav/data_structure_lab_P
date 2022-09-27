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
    int n[] = {8,4,6,1,6,9,1,6,9,8};
    int n1 = sizeof(n)/sizeof(n[0]);
    cout << "Original array: ";
    for (int i=0; i < n1; i++)
    cout << n[i] <<" ";
    int x = 6;

    cout <<"\n"<<"Number of occurrences of 6 : " << C(n, n1, x);
    return 0;
    }
