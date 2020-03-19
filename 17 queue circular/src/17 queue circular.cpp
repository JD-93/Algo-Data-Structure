// QUEUE


#include <iostream>
using namespace std;
#include <iomanip>
//==================================================
typedef int ELEMENT ;				//  typedef int to ELEMENT
								//   b/c in future we can modify int to structure of any user defined data type
							//    LOOK to the future ironman :)

const int size = 5 ;
typedef struct
{								// 	THIS IS ACTUAL DABBA people call it QUEUE
	ELEMENT ele[size] ;
	int front ;					// QUEUE contains ELEMENT type aray of 5 capacity
	int rear ;						// one front and rear index counter
}QUEUE;
//================================================
typedef enum {EXIT,JOINELEMENT,LEAVEELEMENT,TRAVERSE}MENUOPERATIONS ;
int menulist ( )
{
	cout<<"\n\n0. EXIT "<<endl ;
	cout<<"1. JOINELEMENT "<<endl ;
	cout<<"2. LEAVEELEMENT "<<endl ;
	cout<<"3. TRAVERSE "<<endl ;
	cout<<"choice is : " ;
	MENUOPERATIONS choice ;
	scanf("%d",&choice ) ;
	return choice ;
}
//=================================================
void init_queue(QUEUE &q) ;
void join_element(QUEUE &q, ELEMENT &item ) ;
void leave_element(QUEUE &q) ;

void peek_element(QUEUE &q) ;
bool is_empti(QUEUE &q) ;
bool is_full(QUEUE &q) ;
void accept_ELEMENT(ELEMENT &item) ;
void display(QUEUE &q) ;
//=================================================
int main() {

	QUEUE q ;
	init_queue(q) ;
	display(q) ;

	int choice ;
	while ((choice = menulist()) != 0 )
	{
		switch (choice)
		{
			case EXIT:
				break;

			case JOINELEMENT :
				if (is_full(q) )
				{
					cout<<"\nQUEUE is already full"<<endl ;
				}
				else
				{
					ELEMENT item ;
					accept_ELEMENT(item) ;
					join_element(q,item) ;
					display(q) ;
				}
				break ;

			case LEAVEELEMENT :
				if (is_empti(q))
				{
					cout<<"\nQUEUE is already empty"<<endl ;
				}
				else
				{
					peek_element(q) ;
					leave_element(q) ;
					display(q) ;

				}
				break ;

			case TRAVERSE :
				display(q) ;
				break ;

			default:
				cout<<"Enter valid choice " <<endl ;
				break;
		}
	}


	cout<<"\n\n\nTHANKS FOR USING PROGRAM"<<endl ;
	cout<<"========================="<<endl ;
	return 0;
}
//================================================================
		// here are queue functions
void leave_element(QUEUE &q)
{
	q.ele[q.front] = 0 ;

/*	for (int i=q.front ; i<q.rear ; i++)
	{
		q.ele[i] = q.ele[i+1] ;
		q.ele[i+1] = 0 ;
	}
	q.rear-- ;
*/
	q.front++ ;
}
//--------------------------------------------------------------------
void peek_element(QUEUE &q)
{
	cout<<"\PEEK ed value is  : "<<q.ele[q.front] << endl  ;			// display ELEMENT
	cout<<endl ;
}
//-----------------------------------------------------------------
bool is_empti(QUEUE &q)
{
	if ( (q.front == q.rear)&&(q.front ==0) )
		return true ;
	else
		return false ;
}
//-----------------------------------------------------------------
bool is_full(QUEUE &q)
{
	if (q.rear-size == q.front )
		return true ;

	if ((q.rear == q.front )&& (q.front != 0))
		return true ;
	else
		return false ;
}
//----------------------------------------------------------------
void join_element(QUEUE &q, ELEMENT &item)
{
	if (q.rear == size )
		q.rear = 0 ;

	q.ele[q.rear] = item ;
	q.rear++ ;
}
//-----------------------------------------------------------------
void accept_ELEMENT(ELEMENT &item )
{
	cout<<"Enter ELEMENT : "<<endl ;
	cout<<"Enter integer : ";
	cin>>item ;
}
//-------------------------------------------------------------------
void display(QUEUE &q)
{
	cout<<"\nQUEUE is :"<<endl ;
	for (int i=0 ; i<size ; i++)
		cout<<setw(4)<<q.ele[i]  ;
	cout<<"\nrear : "<<q.rear <<endl ;
	cout<<"front : "<<q.front <<endl ;
}
//------------------------------------------------------------------
void init_queue(QUEUE &q)
{
	q.rear = 0 ;
	q.front = 0 ;
	for (int i=0 ; i<size ; i++)
		q.ele[i] = 0 ;
}
//------------------------------------------------------------------
