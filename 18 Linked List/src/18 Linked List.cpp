// LINKED LIST


#include <iostream>
using namespace std;
#include <iomanip>
//===============================================
typedef int ELEMENT ;
typedef struct node
{
	ELEMENT data ;
	struct node * next ;
}NODE;

NODE * head = NULL ;
//================================================
typedef enum{EXIT,ADDFIRST,ADDLAST,ADDATPOS,DELFIRST,DELLAST,DELFROMPOS,REVERSE,TRAVERSE}MENUOPERATIONS ;

int menulist()
{
	cout<<"\n\n0. EXIT "<<endl ;
	cout<<"1. ADDFIRST "<<endl ;
	cout<<"2. ADDLAST  "<<endl ;
	cout<<"3. ADDATPOS "<<endl ;
	cout<<"4. DELFIRST "<<endl ;
	cout<<"5. DELLAST  "<<endl ;
	cout<<"6. DELFROMPOS "<<endl ;
	cout<<"7. REVERSE "<<endl ;
	cout<<"8. TRAVERSE "<<endl ;
	cout<<"choice is : " ;
	MENUOPERATIONS choice ;
	scanf("%d",&choice ) ;
	return choice ;}
//=============================================
NODE * create_node() ;
void addfirst(ELEMENT &data) ;
void addlast (ELEMENT &data) ;
void addatpos(ELEMENT &data,int pos) ;
void delfirst() ;
void dellast( ) ;

void traverse( ) ;
void accept_data(ELEMENT &data) ;
//==============================================
int main() {

	ELEMENT data ;
	int pos ;
	int choice ;
	while ((choice = menulist()) != 0 )
	{
		switch (choice)
		{
			case ADDFIRST :
				accept_data(data) ;
				addfirst(data) ;
				traverse() ;
				break;

			case ADDLAST :
				accept_data(data) ;
				addlast(data) ;
				traverse() ;
				break ;

			case ADDATPOS :
				cout<<"\nspecify position to enter : " ;
				cin>>pos ;
				accept_data(data) ;
				addatpos(data,pos) ;
				traverse() ;
				break ;

			case DELFIRST:
				delfirst() ;
				traverse() ;
				break ;

			case DELLAST :
				dellast();
				traverse() ;
				break ;

			case TRAVERSE :
				traverse() ;
				break ;

			default:
				cout<<"\nEnter valid choice" <<endl ;
				break;
		}
	}

	cout<<"\n\nTHANKS FOR USING PROGRAM"<<endl ;
	cout<<"=========================" <<endl ;
	return 0;
}
//===========================================================
		// linked list list functions
void dellast()
{
	NODE * trav = head ;
	NODE * prev = NULL ;

	if (head == NULL )
		return ;

	while (trav->next != NULL )
	{
		prev = trav ;
		trav = trav->next ;
	}
	if (prev == NULL )
		delfirst() ;
	else
	{
		prev->next = NULL ;
		free(trav ) ;
	}
}
//-------------------------------------------------------------
void delfirst()
{
	NODE * temp = head ;
	head = head->next ;
	free(temp) ;
}
//-------------------------------------------------------------
void addatpos(ELEMENT &data,int pos)
{
	NODE * newnode ;
	newnode = create_node() ;
	newnode->data = data ;

	NODE * trav = head ;
	for (int i=1 ; i<pos-1 ; i++)
		trav = trav->next ;
	newnode->next = trav->next ;
	trav->next = newnode ;
}
//----------------------------------------------------------
void addlast(ELEMENT &data)
{
	NODE * newnode ;
	newnode = create_node() ;
	newnode->data = data ;

	if ( head == NULL )
	{
		head = newnode ;
	}
	else
	{
		NODE * trav = head ;
		while (trav->next != 0 )
		{
			trav = trav->next ;
		}
		trav->next = newnode ;
	}
}
//------------------------------------------------------------
void traverse( )
{
	NODE * trav = head ;
	if (trav == NULL )
	{
		cout<<"\nLIST is empty ....." <<endl ;
		return ;
	}
	cout<<"\nLIST is ..."<<endl ;
	while (trav != NULL )
	{
		cout<<trav->data<<"-->" ;
		trav = trav->next ;
	}
}
//--------------------------------------------------------------
NODE * create_node()
{
	NODE * temp ;
	temp = (NODE *)malloc(sizeof(NODE)) ;
	temp->data = 0 ;
	temp->next = NULL ;
	return temp ;
}
//------------------------------------------------------------
void addfirst(ELEMENT &data)
{
	NODE * newnode ;
	newnode = create_node() ;
	newnode->data = data ;

	if (head == NULL )
	{
		head = newnode ;
	}
	else
	{
		newnode->next = head ;
		head = newnode ;
	}
}
//-----------------------------------------------------------
void accept_data(ELEMENT &data)
{
	cout<<"Enter data for new node"<<endl ;
	cout<<"Enter integer : ";
	cin>>data ;
}
//-----------------------------------------------------------
