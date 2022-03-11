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
    for(i=n+1;i>=0;n++,i++)
    {
        a[n]=a[i];
        cout<<"a["<<n<<"]"<<"="<<a[i]<<endl;
    }
    cout<<"Enter the char you want to insert at the first: ";
    cin>>a[0];
    for(i=0;i<=x-1;i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    return 0;
}
