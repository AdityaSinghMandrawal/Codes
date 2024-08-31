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
    //adding some more new patterns
    cout<<endl;
    cout<<"Part (8) :"<<endl;
    for(int i=0;i<n;i++){ 
        for(int j=1;j<=n-1-i;j++){
            cout<<" ";
        }
        char ch='A';
        for(char j=1;j<=(2*i+1);j++){
            cout<<ch;
            if(j<=((2*i+1)/2)){
                ch++;
            }
            else{
                ch--;
            }
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Part (9) :"<<endl;
    int sp=2*(n-1);
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=sp;k++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        sp-=2;
    }
    cout<<endl;
    cout<<"Part (10) :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*n-(2*i+1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Part (11) :"<<endl;
    for (int i=0;i<2*n;i++){
        int s=i;
        if(i>n) s=2*n-i;
        for(int j=0;j<s;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Part (12) :"<<endl;
    for (int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0||j==n||i==n){
                cout<<"#";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}