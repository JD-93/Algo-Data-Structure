// INSERTION SORT

#include <iostream>
using namespace std;
#include <iomanip>

void insertion_sort ( int arr[] ) ;
void display( int arr[] ) ;

const int size = 10 ;
int main() {

	int arr[size] = {10,40,50,60,80,30,20,70,100,90} ;

	 insertion_sort( arr ) ;

	display(arr) ;



	return 0;
}
void insertion_sort ( int arr[] )
{
	int i,j ;
	int key ;
	for ( i=1 ; i<size ; i++)
	{
		key = arr[i] ;
		for ( j=i-1 ; arr[j] > key ; j-- )
		{
			arr[j+1] = arr[j] ;
		}
		arr[j+1] = key ;
	}
}
void display( int arr[] )
{
	cout<<"Here is array : "<<endl ;
	for (int i=0 ; i<size ; i++)
		cout<<setw(4)<<arr[i] ;
}
