// MAX ELEMENT IN ARRAY

#include <iostream>
using namespace std;
#include <iomanip>

void display ( int arr[] ) ;
void swap(int &a, int &b) ;


const int size = 10 ;
int main() {

	int arr[size] = {10,20,50,100,60,40,30,40,70,90} ;

	display(arr) ;

	for (int i=0 ; i<size-1 ; i++ ){
		if (arr[i] > arr[i+1] )
			swap(arr[i],arr[i+1]) ;
		display(arr) ;
	}
	display(arr) ;


	return 0;
}
void swap(int &a, int &b)
{
	int temp ;
	temp = a ;
	a = b ;
	b = temp ;
}
void display( int arr[] )
{
	cout<<"\nHere is array: "<<endl ;
	for (int i=0 ; i<size ; i++)
		cout<<setw(4)<<arr[i] ;
}
