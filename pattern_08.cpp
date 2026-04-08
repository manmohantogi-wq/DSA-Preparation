// n = 4

// Output =  1 
//           2 1
//           3 2 1
//           4 3 2 1  


#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    int num = 1;

    for(int i=0;i<n;i++)
    {
        for(int j=num;j>0;j--)
        {
            cout<<j<<" ";
        }
        num++;
        cout<<endl;
    }
    return 0;
}