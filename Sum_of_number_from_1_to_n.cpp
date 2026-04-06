// Sum of number from 1 to n 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the number : ";
    cin>>n;

    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum+i;
    }
    cout<<"Sum of number from 1 to n is : "<<sum<<endl;
    return 0;
}