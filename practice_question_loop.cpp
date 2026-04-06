// Sum of all number from 1 to n which is divisible by 3 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int sum = 0;
    for(int i=1;i<=n;i++)
    {
       if(i%3 == 0)
       {
        sum = sum+i;
       }
    }
    cout<<"Sum of all number for 1 to "<<n<<" which is divisible by 3 is : "<<sum<<endl;
    return 0;
}