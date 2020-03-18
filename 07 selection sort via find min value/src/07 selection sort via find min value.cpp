// SELECTION SORT

#include <iostream>
using namespace std;
#include <iomanip>

void selection_sort(int arr[] ) ;
void display( int arr[] ) ;

int min_array(int arr[],int index ) ;
void swap(int &a,int &b) ;

int comparison = 0 ;
const int size = 10 ;

int main() {

	int arr[size] = {10,10,50,60,40,30,40,70,100,90} ;
//	int arr[size] = {10,20,40,30,50,60,70,80,90,100} ; 			//-- already sorted array


	selection_sort(arr);
	display(arr) ;

	cout<<"\n\nno of comparisons are : "<<comparison <<endl ;
	return 0;
}
void selection_sort(int arr[] )
{
	for (int pos = 0 ; pos<size-1 ; pos++ ){			// start iteration from 0 to (n-1)
		comparison++ ;
		int min_index = min_array(arr,pos) ;		// get index of minimum element from remaining array
		swap(arr[pos],arr[min_index]) ;			//swap minimum element and pos counter element
//		display(arr) ;
//		cout<<endl ;
	}

}
void swap( int &a, int &b)
{
	int temp ;
	temp = a ;
	a=b;
	b=temp ;
}

int min_array(int arr[], int index)
{
	int min_index = index ;
	for (int i=index+1 ; i<size ; i++ )
	{
		if (arr[min_index] > arr[i] )
			min_index = i ;
	}
	return min_index ;
}
void display( int arr[] )
{
	cout<<"Here is array: "<<endl ;
	for (int i=0 ; i<size ; i++)
		cout<<setw(4)<<arr[i] ;
}
