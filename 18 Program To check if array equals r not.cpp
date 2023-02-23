#include<iostream>
using namespace std;
int main()
{
	int arr[100],size,size2;
	cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: "<<endl;
    for(int i=0; i<size; i++)
    {
    cout<<"Enter value "<<i+1<<" : ";
    cin>>arr[i];
    }
    cout<<"Enter size of 2nd array : ";
    cin>>size2;
    cout<<"Enter elements in 2nd array : "<<endl;
    for(int j=0; j<size2; j++)
    {
    cout<<"Enter value "<<j+1<<" : ";
    cin>>arr[j];
    }
    cout<<endl;
    cout<<"\n the  total numbers in array: "<<endl;
    for(int i=0; i<size; i++)
	{
	cout<<arr[i]<<"\t";

    }
    cout<<endl;
    
    cout<<"\n the  total numbers in 2nd array: "<<endl;
    for(int j=0; j<size; j++)
	{
	cout<<arr[j]<<"\t";

    }
    
   
    
	
	if(size==size2  )
	{
	for(int j=0; j<size2; j++)
	{
	
	for(int i=0; i<size; i++)
	{
	
    if (arr[i]==arr[j])
    
   }
   }
   	cout<<"The Two arrays are same and equal Because they correspond to equal size and values  "<<endl;

   }
   else
   {
   	cout<<"the arrays are not same and  equal :";
   }
   
    return 0;
   }  
