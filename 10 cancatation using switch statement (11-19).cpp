#include <iostream>
using namespace std;
 
int main()
{
  int number;
	
	cout<<"enter the Question Number you want to  Check/Run(1-9)  : ";
	cin>>number;
	

	switch(number)
	{
		
		case 1:{
			vector<int> even, odd;  
    int n;  
    cout << "Enter the number of integers: ";
    cin >> n;
    int num;
    for (int i = 0; i < n; i++) {
        cout << "Enter integer #" << i + 1 << ": ";
        cin >> num;
        if (num % 2 == 0) {
            even.push_back(num);  /
        } else {
            odd.push_back(num);  
        }
    }
    cout << "Even integers: ";
    for (int i = 0; i < even.size(); i++) {
        cout << even[i] << " ";
    }
    cout << endl;
    cout << "Odd integers: ";
    for (int i = 0; i < odd.size(); i++) {
        cout << odd[i] << " ";
    }
    cout << endl;
			
		break;
		}
		
		case 2:{
			 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd_count = 0;
    int even_count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }
    cout << "Number of odd integers: " << odd_count << endl;
    cout << "Number of even integers: " << even_count << endl;
			
			
		break;
		}
		
		case 3:{
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
    
    cout<<"the sorted array in ascending order Is : "<<endl;
    for(int i=0; i<size; i++)
    {
    for(int j=i+1; j<size; j++)
    {
    if(arr[i]>arr[j])
    {
    int temp=0;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;	
	}
	
	}
	cout<<arr[i]<<"\t";
    }
			
			
		break;
		}
		case 4:{
			
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
	//cout<<arr[i]<<"\t";	
	}
	cout<<arr[i]<<"\t";
    }
    cout<<"\n The Second Largest number in array  is : "<<arr[1];

		break;
		}
		case 5:{
			
			
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
    
    cout<<"the sorted array in ascending order Is : "<<endl;
    for(int i=0; i<size; i++)
    {
    for(int j=i+1; j<size; j++)
    {
    if(arr[i]>arr[j])
    {
    int temp=0;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;	
	}
	}
	cout<<arr[i]<<"\t";
    }
    cout<<"\n The Second Smallest Number is : "<<arr[1];
	
		break;
		}
		case 6:{
			
			
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

		break;
		}
		case 7:{
			
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
   
		break;
		}
		case 8:{
			int arr[] = {2, 5, 1, 7, 3, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_diff = arr[1] - arr[0];
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] - arr[i] > max_diff) {
                max_diff = arr[j] - arr[i];
            }
        }
    }
    cout << "The maximum difference in the array is " << max_diff << endl;
			
			
		break;
		}
		default :
			{
				cout<<"you have entered invalid choice  :";
			}
		}
	return 0;	
	}
