#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
	int mid=(startIndex+lastIndex)/2;
	
	if(array[mid]==element)
	  return true;
	  if(element>array[mid])
	  {
	  	return binarySearchReacursive(array,mid,lastIndex,element);
	  }
	   else if(element<array[mid])
	   {
	   	return binarySearchReacursive(array,startIndex,mid,element);
	   }
	   return false;
	  
  
}

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
	int result=0;
	while(true)
	{
	
		
			
			int mid=(startIndex+lastIndex)/2;
			if(element<array[mid])
			{
				lastIndex=mid;
			}
			else if(element>array[mid])
			{
				startIndex=mid;
			}
		
		else if(element==array[mid])
		{
			result=mid;
			return true;
			break;
		}
	}
  return false;
}

int main()
{int n,choice,x;
   cout<<"enter the size of the array";
   cin>>n;
   int arr[n];
   cout<<"enter the element of the array";
   for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
   sort(arr,arr+n);
   cout<<"enter  1 for binarysearch by recursive "<<endl;
   cout<<"enter 2 for binarysearch by iterative "<<endl;
  cout<<"enter your choice ";
  cin>>choice;
  cout<<"enter the number to be search :"<<endl;   
   cin>>x;
   switch(choice)
   {
   	   case 1:
   	   binarySearchReacursive(arr,0,n,x);
   	   cout<<binarySearchReacursive(arr,0,n,x);
   	   break;
   	   case 2:
   	   binarySearchIterative(arr,0,n,x);
   	   cout<<binarySearchIterative(arr,0,n,x);
   	   break;
   	   default:
   	   cout<<"invalid choice";
   }
  return 0;
