#include<iostream>
using namespace std;
int main()
{
	int arr[i],size;
	cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(int i=0; i<size; i++)//   STEP 1(INPUT)
    {
    cout<<"Enter value "<<i+1<<" : ";
    cin>>arr[i];
    }
    cout<<endl;
    cout<<"\n the  total numbers in array: ";
    for(int i=0; i<size; i++)//   STEP 2(OUTPUT)
	{
	cout<<arr[i]<<"\t";

    }
    cout<<endl;
    cout<<"the list of even number in array is :";
     
    for(int i=0; i<size; i++)// STEP 3(CONDITION)
    {
    	if(arr[i]%2==0)
    	
		{
		
    	cout<<arr[i]<<"\t";
        }
	
	}
	
	return 0;
}
