#include<iostream>
using namespace std;
int main()
{
    cout<<"Name: Abhinav Pokhariyal\nSection: B1\nRoll no:02\n";
    int n=5;
    cout<<"Part (1) :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Part (2) :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j<n-1) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Part (3) :"<<endl;
    for(int i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Part (4) :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=n;k>i;k--)
            cout<<"*";
            cout<<endl;
    }
    cout<<endl;
    cout<<"Part (5) :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<=i;k++)
           cout<<"* ";
            cout<<endl;
    }
    cout<<endl;
    cout<<"Part (6) :"<<endl;
      for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Part (7) :"<<endl;
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    

}