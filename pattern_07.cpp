// n = 4

// Output =  1 
//           1 2
//           1 2 3
//           1 2 3 4


#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    int num = 1;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=num;j++)
        {
            cout<<j<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}