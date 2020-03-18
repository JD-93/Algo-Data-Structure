// PROGRAM FOR ACCEPT AND SIPLAY ARRAY


#include <iostream>
using namespace std;

void accept_array(int arr[]) ;
void display_array( int arr[] ) ;

const int size = 10 ;

int main() {
	int arr[size]  ;

	accept_array(arr) ;
	display_array(arr) ;


	return 0;
}

void accept_array( int arr[] )
{

	for (int i=0 ; i<size ; i++)	{
		cout<<"Enter array element arr["<<i<<"] :  " ;
		cin>>arr[i] ;
	}
}

void display_array( int arr[ ] )
{
	int n = size ;

	cout<<"\n\nArray is :"<<endl ;

	for (int i=0 ; i<n ; i++)
		cout<<"arr["<<i<<"] : "<<arr[i] <<endl ;
}
