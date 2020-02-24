#include <iostream>
using namespace std;



int main()
{

	int arr[5];
	int n,i,j;
	int temp;

	cout<<"Enter number of elements: ";
	cin>>n;


	for(i=0;i<n;i++)
	{
		cout<<"Enter elements ["<<i+1<<"] ";
		cin>>arr[i];
	}


	cout<<"Elements Entered:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;


	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}


	cout<<"Sorted elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;


	return 0;

}
