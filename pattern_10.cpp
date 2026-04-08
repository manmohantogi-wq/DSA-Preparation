// n = 4

// Output =  A 
//           B C
//           D E F
//           G H I J  


#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    char num = 'A';

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}