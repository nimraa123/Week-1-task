#include<iostream>
using namespace std;
int main()
{
	int arr[100],size;
	cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(int i=0; i<size; i++)
    {
    cout<<"Enter value "<<i+1<<" : ";
    cin>>arr[i];
    }
    cout<<endl;
    cout<<"\n the  total numbers in array: "<<endl;
    for(int i=0; i<size; i++)
	{
	cout<<arr[i]<<"\t";

    }
    cout<<endl;
    
    cout<<"the sorted array in Decending order Is : "<<endl;
    for(int i=0; i<size; i++)
    {
    for(int j=i+1; j<size; j++)
    {
    if(arr[i]<arr[j])
    {
    int temp=0;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;	
	}
	}
	cout<<arr[i]<<"\t";
    }
    cout<<"\n The Second Largest number in array  is : "<<arr[1];

	return 0;
}
