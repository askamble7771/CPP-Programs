#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
	bool flag;
	for(int i=0; i<n-1; i++)
    {
        flag = false; 
    	for(int j=0; j<n-i-1; j++)
        {
        	if(arr[j]>arr[j+1])
            {
            	int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;
            }
        }
        
        if(!flag)
        {
        	break;
        }
    }
    
    for(int i=0; i<n; i++)
    {
    	cout<<arr[i]<<endl;
    }
}

int main() 
{  
	int nums[] = {2, 3, 1, 4, 10, 5, 7, 21};
    int n = sizeof(nums)/sizeof(nums[0]);
    
    sort(nums, n);
   
  	return 0;
}
