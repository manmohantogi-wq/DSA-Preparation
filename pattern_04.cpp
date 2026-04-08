// n = 3

// Output =  A B C
//           D E F
//           G H I


#include<iostream>
using namespace std;
int main()
{
    int n = 3;
    char num = 'A';

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<num<<" ";
            num = num + 1;
        }
        cout<<endl;
    }
    return 0;
}