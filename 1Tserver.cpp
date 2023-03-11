#include<iostream>
using namespace std;

int T()
{
    int T;
    cout<<"Enter the number of testcases"<<endl;
    cin>>T;
    int a[T],b[T],c[T];
    
    for(int i =0;i<T;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    cout<<a[T-1]<<" "<<b[T-1]<<" "<<c[T-1]<<endl;
    for(int i = 0;i<T-1;i++)
    {
            cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;

    }
}

int main()
{
    T();
    return 0;
}