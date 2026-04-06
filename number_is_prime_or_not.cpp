// Number is prime number or non-prime number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    bool isPrime = true;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime == true)
    {
        cout<<"Number is prime"<<endl;
    }else{
        cout<<"Number is non-prime "<<endl;
    }
    return 0;
}