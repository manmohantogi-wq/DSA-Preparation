// n = 4

// Output =  A B C D 
//           A B C D
//           A B C D
//           A B C D


#include<iostream>
using namespace std;
int main()
{
    int n = 4;

    for(int i=0;i<n;i++)
    {
        char ch = 'A';
        for(int j=1;j<=n;j++)
        {
            cout<<ch<<" ";
            ch = ch + 1; //65 + 1 => 66 => B
        }
        cout<<endl;
    }
    return 0;
}