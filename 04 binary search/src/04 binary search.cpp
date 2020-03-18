// BINARY SEARCH


#include <iostream>
using namespace std;

bool binary_search(int arr[], int key ) ;

static int position = 0 ;
const int size = 10 ;
int comparisons = 0 ;
int main() {

	int arr[size] = {10,20,30,40,50,60,70,80,90,100} ;

	int key ;
	cout<<"Enter element to be searched : " ;
	cin>>key ;

	if (binary_search(arr,key))
	{
		cout<<"Element found in array :)" <<endl ;
		cout<<"no of comparison required are "<<::comparisons <<endl ;
		cout<<"position of found umber is :"<<position <<endl ;
	}
	else
	{
		cout<<"Element not found in array :(" <<endl ;
		cout<<"no of comparison required are "<<comparisons <<endl ;
	}

	return 0;
}

bool binary_search(int arr[], int key )
{
	int low = 0 ;
	int up = size-1 ;
	int mid  ;
	while ( low <= up )
	{
		comparisons++ ;
		mid = (up+low)/2 ;
		position = mid ;

		if (arr[mid] == key )
			return true ;

		else if ( key < arr[mid] )
			up = mid-1 ;

		else if ( key > arr[mid] )
			low = mid+1 ;
	}

	return false ;
}
