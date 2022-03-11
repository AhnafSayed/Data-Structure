#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value of Array: " <<endl;
    cin>>n;
    char arr[n];
    cout<<endl;
    cout<<"Enter the elements of Array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return 0;
}
