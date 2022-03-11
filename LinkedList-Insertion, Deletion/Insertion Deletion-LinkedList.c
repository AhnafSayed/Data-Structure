
#include<iostream>
using namespace std;
struct ListNode{
	int data;
	ListNode *next;
};
ListNode *Head = NULL;
ListNode *GetNewNode( void ){
	ListNode *Node = new ListNode;
	Node->next = NULL;
	return Node;
}
int GetData( void ){
	int data;
	cout<<"Enter your data value: ";
	cin >> data;
	return data;
}

void AddData( ListNode *p, int data){
	p->data = data;
}
ListNode *CreateNewNode( void ){
	ListNode *CurNode = GetNewNode( );
	AddData( CurNode, GetData( ) );
	return CurNode;
}
void CreateList( int TotalElement ){
    ListNode *CurNode = Head = GetNewNode( );
    AddData( CurNode, GetData( ) );
    for(int i=1; i<TotalElement; i++){
	  CurNode->next = CreateNewNode( );
	  CurNode = CurNode->next;
    }
}
void InsertNode( ListNode *Prev, ListNode *Node){
if( Prev == NULL ){
       // Insertion of a node as a head node
  	Node->next = Head;
	Head = Node;
  }else{
  	Node->next = Prev->next;
  	Prev->next = Node;
  }
}
void DeleteNode( ListNode *Prev ){
 ListNode *Curr;
  if(Prev == NULL){
	// Deletion of a node as a head node
	Curr = Head;
	Head = Curr->next;
  }else{
	Curr = Prev->next;
	Prev->next = Curr->next;
  }
  delete Curr;
}
void ShowList( void ){
	ListNode *Curr = Head;
	cout<<"Total number elements in the linked list: ";
	while( Curr != NULL ){
		cout << Curr->data << " ";
		Curr = Curr->next;
	}
	cout << endl;
}

void insert_first(void)
{
    int data,pos;
    ListNode *curr=new ListNode();
    cout<<"Insert data into first position..\n";
    data=GetData();
    curr->data=data;
    curr->next=NULL;
    curr->next=Head;
    Head=curr;
}
void insert_last(int pos)
{
    int data;
    ListNode *curr=new ListNode();
    cout<<"Insert data into last position..\n";
    data=GetData();
    curr->data=data;
    curr->next=NULL;
    ListNode* curr1=Head;
    for(int i=0;i<pos-1;i++)
    {
        curr1=curr1->next;
    }
    curr->next=curr1->next;
    curr1->next=curr;
}
void insert_middle()
{
    int data,pos;
    ListNode *curr=new ListNode();
    cout<<"Enter the position of your middle data:";
    cin>>pos;
    data=GetData();
    curr->data=data;
    curr->next=NULL;
    ListNode* curr1=Head;
    for(int i=0;i<pos-2;i++)
    {
        curr1=curr1->next;
    }
    curr->next=curr1->next;
    curr1->next=curr;
}

int main()
{
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;

    CreateList(n);
    ShowList();

    insert_first();
    ShowList();

    insert_last(n+1);
    ShowList();

    insert_middle();
    ShowList();

    return 0;
}
