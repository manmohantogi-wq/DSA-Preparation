// Sum of odd number from 1 to n 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the number : ";
    cin>>n;

    int sum = 0;
    for(int i=0;i<=n;i++)
    {
        if(i%2 != 0)
        {
            sum = sum+i;
        }
    }

    cout<<"Sum of number from 1 to n is : "<<sum<<endl;
    return 0;
}