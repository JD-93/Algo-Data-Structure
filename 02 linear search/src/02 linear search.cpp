//  LINEAR SEARCH



#include <iostream>
using namespace std;

bool linear_search(int arr[], int key);

int comparisons = 0 ;
const int SIZE = 10 ;

int main() {

	int arr[SIZE] = {10,20,30,40,50,60,70,80,90,100};

	int key ;
	cout<<"Enter no to be found : " ;
	cin>>key ;

	if (linear_search(arr,key))
	{
		cout<<"Element found in array :)" <<endl ;
		cout<<"no of comparison required are "<<comparisons <<endl ;
	}
	else
	{
		cout<<"Element not found in array :(" <<endl ;
		cout<<"no of comparison required are "<<comparisons <<endl ;
	}



	return 0;
}

bool linear_search ( int arr[] , int key )
{
	comparisons = 0  ;
	for (int i=0 ; i<SIZE ; i++) {
		comparisons++ ;						// counter for comparisons
		if (arr[i] == key )
			return true ;					// direct exit from function

	}
	return false ;				// if element not found fall from here
}
