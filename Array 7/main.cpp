#include<iostream>
using namespace std;

int main()
{
   int array[50], pos, i, n, value;

   cout<<"Enter number of elements in array"<<endl;
   cin>>n;

   cout<<"Enter elements in array index"<<endl;

   for (i = 0; i < n; i++)
      cin>>array[i];

   cout<<"Enter the position where you wanted to insert an element"<<endl;
   cin>>pos;

   cout<<"Enter the value to insert"<<endl;
   cin>>value;

   for (i = n - 1; i >= pos - 1; i--)
      array[i+1] = array[i];

   array[pos-1] = value;

   cout<<"your final array is"<<endl;

   for (i = 0; i <= n; i++)
      cout<<array[i];

    return 0;
}
