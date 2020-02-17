#include<bits/stdc++.h>
using namespace std;

void binary(int a[],int n,int key)
{
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = (low+high)/2;

         if( a[mid] == key )
        {
            printf("\n the key is found at position %d ",mid+1);
            return;
        }

        else if(key < a[mid])
        {
            high = mid;
        }

        else
        {
            low = mid+1;
        }
    }
}

int main()
{
    int n;
    cout<<"\nPlease enter the number of elements in the array :\n";
    cin>>n;
    int a[n];
    cout<<"\nPlease enter the elements of the array \n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int key;
    cout<<"\nPlease enter the key to search \n";
    cin>>key;
    binary(a,n,key);
}
