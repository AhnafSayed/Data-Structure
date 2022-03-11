#include <iostream>

using namespace std;

int main()
{
    int size,n,i;
    cout<<"Enter total index value of Array: ";
    cin>>size;
    cout<<"How many elements you want to insert?: ";
    cin>>n;
    char a[n];
    cout<<endl;
    cout<<"Enter the elements of Array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=n;
    cout<<"Enter the char you want to insert at the last: ";
    cin>>a[5];
    for(i=n-1;i>=x-1;i--)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    return 0;
}
