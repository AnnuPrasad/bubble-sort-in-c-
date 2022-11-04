#include<iostream>
using namespace std;
void bubble_sort(int[],int);
int main()
{
	int arr[5],i;
	cout<<"\n enter the element";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	bubble_sort(arr, 5);
	return 0;
}
//sorting
void bubble_sort(int ar[], int n)
{
	int i, j, temp;
	for(i=0;i<n;i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp =  ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
			}
		}
	}
	cout<<"\n the sorted array is";
	for(i = 0; i<n; i++)
	{
		cout<<endl<<ar[i]<<" ";
	}
}
