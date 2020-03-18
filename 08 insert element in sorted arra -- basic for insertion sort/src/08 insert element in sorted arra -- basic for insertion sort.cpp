// INSERT ELEMET IN ARRAY SO THAT IT REMAIN SORTED

#include <iostream>
using namespace std;
#include <iomanip>

void display ( int arr[] ) ;
void insert (int arr[], int key) ;

const int size = 10 ;
int main() {

	int arr[size] = {2,4,6,9,12,15,16,19,20} ;
	display(arr) ;

	int key = 13 ;
	insert(arr,key) ;

	display(arr) ;
	return 0;
}

void insert (int arr[], int key)
{
	int i ;
	for (i=size-2 ; arr[i]>key ; i--){    		//scan array upto arr[i] > key
		arr[i+1] = arr[i] ;								// till then right shift element
	}

	arr[i] = key ;				// if element is less than key insert key
}

void display ( int arr[] )
{
	cout<<"\nHere is array :"<<endl ;
	for (int i=0 ; i<size ; i++) {
		cout<<setw(3)<<arr[i]  ;
	}
}
