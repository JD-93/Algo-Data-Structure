// RECURSIVE BINARY SEARCH

#include <iostream>
using namespace std;

bool rec_binary_search(int arr[], int key,int low,int up) ;

int position = 0 ;					// position counter to get position of element if fount
									// set in condition before return true
const int size = 10 ;
int comparisons = 0 ;
int main() {

	int arr[size] = {10,20,30,40,50,60,70,80,90,100} ;

	int key ;
	cout<<"Enter element to be searched : " ;
	cin>>key ;

	if (rec_binary_search(arr,key,0,9))
	{
		cout<<"Element found in array :)" <<endl ;
		cout<<"no of comparison required are "<<::comparisons <<endl ;
		cout<<"position of found element is : "<<position <<endl ;
	}
	else
	{
		cout<<"Element not found in array :(" <<endl ;
		cout<<"no of comparison required are "<<comparisons <<endl ;
	}

	return 0;
}

bool rec_binary_search(int arr[], int key,int low, int up)
{

	if (low > up )
		return false ;

	comparisons++ ;

	int mid = (low+up)/2 ;

	if (arr[mid] == key) {
		position =  mid ;				// set posiiotn of index
		return true ;
	}


	else if ( key < arr[mid] )
		rec_binary_search(arr,key,low,mid-1) ;
	else
		rec_binary_search(arr,key,mid+1,up)	;

}
