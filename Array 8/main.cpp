#include <iostream>

using namespace std;

int main()
{
    int arr[50],position,n,values,i;
    cout<<"How many elements you want to insert?: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the values: "<<endl;
        cin>>arr[i];
    }
    cout<<"Enter the location where you want to insert the value: "<<endl;
    cin>>position;
    cout<<"Enter a value you want to insert: "<<endl;
    cin>>values;
    for(i=n-1;i>=position;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position-1]=values;
    cout<<"The Array is: "<<endl;
    for(i=0;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
