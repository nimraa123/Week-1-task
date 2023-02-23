#include <iostream>
using namespace std;
 
int main()
{
  int number;
	
	cout<<"enter the Question Number you want to  Check/Run(1-9)  : ";
	cin>>number;
	

	switch(number)
	{
		cout<<"program that will print minimum number : "<<endl;
		case 1:
			{
				
				int arr[5];
	cout<<"enters the five numbers In array :"<<endl;
	for(int i=0; i<5; i++)//   STEP 1(INPUT)
	{
		cout<<"Enter value at index "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)//   STEP 2(OUTPUT)
	{
		cout<<arr[i]<<"\t";
    }
    cout<<endl;
int	min=arr[0];
	for(int i=0; i<5; i++)// STEP 3(CONDITION)
	{
	
	if(min>arr[i])
	{
		min=arr[i];	
	}
}
    cout<<"minimum value is : "<<min;	
	
				
				
				
				break;
			}
			
		case 2:
			{
				cout<<"Program that will Print  Maximum out of 5 numbers in an array : "<<endl;
				int arr[5];
	cout<<"enters the five numbers In Array :"<<endl;
	for(int i=0; i<5; i++)//   STEP 1(INPUT)
	{
		cout<<"the element in "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0; i<10; i++)//   STEP 2(OUTPUT)
	{
		cout<<arr[i]<<"\t";

	
    }
int	max=arr[0];
	for(int i=0; i<5; i++)// STEP 3(CONDITION)
	{
	
	if(max<arr[i])
	{
		max=arr[i];
		
	}
    }
    cout<<"maximum value is : "<<max; 	
			
			
				
				
				
			break;	
			}
			case 3:
			{
					cout<<"Program that will Print  the Index Number  of a number in an array : "<<endl;
					int number,arr[5];
	cout<<"enters the five numbers"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter value "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";

	
    }
    cout<<endl;
cout<<"enter the number you want to Check in array : "<<endl;
cin>>number;
	for(int i=0; i<5; i++)
	{
	
	if(number==arr[i])
	{
		cout<<"the number is located at index number"<<i;
	}
    }
				
				
				
				
				break;
			}
		case 4 :{
			
			
			cout<<"Program that will Print  the number times a number occur  out of 5 numbers in an array : "<<endl;
			int number,arr[5];
	cout<<"enters the five numbers"<<endl;
	for(int i=0; i<5; i++)//   STEP 1(INPUT)
	{
		cout<<"Enter value "<<i+1<<" : ";
		cin>>arr[i];
	}

	for(int i=0; i<5; i++)//   STEP 2(OUTPUT)
	{
		cout<<arr[i]<<"\t";

	
    }
    
	cout<<"\n enter the number you want to check for repeatition  : "<<endl;
cin>>number;
int count=0;
for(int i=0; i<5; i++)// STEP 3(CONDITION)
{
	if(number==arr[i])
	{
		count++;
	}
	
}
cout<<"The number Repeatition in array  Is : "<<count<<" Times"<<endl;
			
			
			
			
			break;
		}
		case 5 :{
			cout<<"Program that will print the odds number from an array";
				int arr[100],size;
	cout<<"Enter size of array: ";
    cin>>size;

    cout<<"Enter elements in array: "<<endl;//   STEP 1(INPUT)
    for(int i=0; i<size; i++)
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
    cout<<"the list of odd number in array  is :";
     
    for(int i=0; i<size; i++)// STEP 3(CONDITION)
    {
    	if(arr[i]%2!=0)
    	
		{
		
    	cout<<arr[i]<<"\t";
        }
	
	}
	
			
			
			
			
			
			
			
			break;
		}
		case 6 :{
			
			int i;
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
			
			
			
			
			
			break;
		}
		case 7 :{
			
				int arr[100],size,sum=0;
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
			
			
			
			
			
			
			break;
		}
		case 8 :{
			
			int arr[100],size;
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
    cout<<"the array in reverse ordered is as: ";
    
    for( int i=size-1; i>=0; i--)// STEP 3(CONDITION)
    {
    	cout<<arr[i]<<"\t";
  	
	}	
			
			
			
			
			
			
			break;
		}
		case 9 :{
			
			
			 int arr[100], size, isUnique;
    int i, j, k;
 
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: ";
    for(i=0; i<size; i++)// STEP 1 INPUT
    {
    cout<<"Enter value "<<i+1<<" : ";
    cin>>arr[i];
    }
    for(int i=0; i<size; i++)// STEP 2  OUTPUT
	{
	cout<<arr[i]<<"\t";

    }
    cout<<endl;
    for(i=0; i<size; i++)
    {
    isUnique = 1;
 
    for(j=i+1; j<size; j++)
    {
 
 
    if(arr[i]==arr[j])// STEP 3 CONDITION FOR UNIQUE eLEMENT REMOVING REMOVAL
    {
    for(k=j; k<size-1; k++)
    {
    arr[k] = arr[k+1];
    }
 
    size--;
    j--;
    isUnique = 0;
    }
    }
 
        
    if(isUnique != 1)
    {
    for(j=i; j<size-1; j++)
    {
    arr[j] = arr[j+1];
    }
    size--;
    i--;
    }
    }
    cout<<"All unique elements in the array are: ";
    for(i=0; i<size; i++)
    {
       cout<<arr[i]<<"\t";
    }
			
			
			
			
			
			break;
		}
		default :
			{
				
				cout<< "you have entered a invalid numbers : "<<endl;
			}
		
		
		
		
	  }  
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
