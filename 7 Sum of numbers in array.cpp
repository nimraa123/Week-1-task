#include<iostream>
using namespace std;
int main()
{
	int arr[i],size,sum=0;
	cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(int i=0; i<size; i++)//   STEP 1(INPUT)
    {
    cout<<"Enter value "<<i+1<<" : ";
    cin>>arr[i];
    }
    cout<<endl;
    cout<<"\n the  numbers in array: ";
    for(int i=0; i<size; i++)//   STEP 2(OUTPUT)
	{
	cout<<arr[i]<<"\t";

    }
    cout<<endl;
    for(int i=0; i<size; i++)// STEP 3(CONDITION)
    {
    	sum=sum+arr[i];
    	
	}
	cout<<"the sum of given numbers in Array is : "<<sum;
	return 0;
}
