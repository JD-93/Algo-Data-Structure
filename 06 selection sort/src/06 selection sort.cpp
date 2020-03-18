// SELECTION SORT

#include <iostream>
using namespace std;
#include <iomanip>

void selection_sort(int arr[] ) ;
void display( int arr[] ) ;

int comparison = 0 ;
const int size = 10 ;

int main() {

//	int arr[size] = {10,20,50,60,40,30,40,70,100,90} ;
	int arr[size] = {10,10,40,30,50,60,70,80,90,100} ; 			//-- already sorted array

	selection_sort(arr);
	display(arr) ;

	cout<<"\n\nno of comparisons are : "<<comparison <<endl ;
	return 0;
}

void selection_sort(int arr[] )
{
	for (int select_pos= 0  ; select_pos<size-1 ; select_pos++)
	{
		comparison++ ;
		for (int pos = select_pos + 1 ; pos < size ; pos++)
		{
			if ( arr[select_pos] > arr[pos])
			{

				int temp ;
				temp = arr[select_pos] ;
				arr[select_pos] = arr[pos] ;
				arr[pos] = temp ;
			}
		}
	}
}

void display( int arr[] )
{
	cout<<"Here is array: "<<endl ;
	for (int i=0 ; i<size ; i++)
		cout<<setw(4)<<arr[i] ;
}
