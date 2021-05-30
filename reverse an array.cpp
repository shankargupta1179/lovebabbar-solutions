#include <iostream>
using namespace std;

int main() {
	int i=0,test;
	cin>>test;
	for(i=0;i<test;i++)
	{
	    int size;
	    cin>>size;
	    int arr[size];
	    for(int j=0;j<size;j++)
	    {
	        cin>>arr[j];
	    }
	    int start,end;
	    start=0;
	    end=size-1;
	    while(start<end)
	    {
	        int k;
	        k=arr[start];
	        arr[start]=arr[end];
	        arr[end]=k;
	        start++;
	        end--;
	    }
	    for(int j=0;j<size;j++)
	    {
	        cout<<arr[j]<<" ";
	    }
	    cout<<endl;
	}
}
