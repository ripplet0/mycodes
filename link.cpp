#include<iostream>
#define null=0
using namespace std;
class list
 {
	public:
		struct node
		{
			int data;
			node * link;
		 };
		  node * start;
		list()
		  {
			start=NULL;
		  }
		
		      void createList(int d);
		      void display();
		      void count();
		      void insertFirst(int d);
		      void insertLast(int d);
		      void insertNode(int p,int d);
		      void deleteFirst();
		      void deleteLast();
		      void deleteNode(int);
 };


 void list::createList(int d)

 {
	if(start==NULL)
       {
  start=new node;
  start->data=d;
  start->link=NULL;
      }
       else
       {
	node*temp;
	temp=start;
	while((temp->link)!=NULL)
	{
		temp=temp->link;
		   }
		   node *temp2;
		   temp2=new node;
		   temp2->data=d;
		   temp2->link=NULL;
		   temp->link=temp2;
	   }
}


void list::display()
 {
	node*temp;
	temp=start;
	cout<<"\n";
	while(temp!=NULL)
	    {
		cout<<temp->data<<"==>";
		temp=temp->link;
		 }
   }  
    void list::count()
      {
	node*temp;
	int count=0;
	temp=start;
	cout<<"\n";
	while(temp!=NULL)
	  {
		count++;
		temp=temp->link;
			}
			cout<<"count is"<<count;
			
	  }
	
	  void list::insertFirst(int d)
	  {
		node*temp;
		temp=new node;
		temp->data=d;
		temp->link=start;
		start=temp;
	  }
	  void list::insertLast(int d)
	  {
		node*ptr;
		ptr=start;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		  }
	         node*temp=new node;
	         temp->data=d;
	         temp->link=NULL;
			 ptr->link=temp;
			 }
			 void list::insertNode(int p,int d)
	  {
		int i=1;
		node *ptr,*temp,*save;
		temp=new node;
		temp->data=d;
		ptr=start;
		save=NULL;
		while(i<p)
		{
			save=ptr;
			ptr=ptr->link;
			i++;
		  }
		  save->link=temp;
		  temp->link=ptr;
	  }
	
	  void list::deleteFirst()
	  {
		node*temp;
		temp=start;
		start=start->link;
		delete temp;
	  }
	  void list::deleteLast()
	  {
		node *temp1,*temp2;
		temp2=NULL;
		temp1=start;
		while(temp1->link!=NULL)
		  {
			temp2=temp1;
			temp1=temp1->link;
			}
			temp2->link=NULL;
			delete temp1;
	  }
	
	  void list::deleteNode(int p)
	  {
		int j=1;
		node *temp1,*temp2;
		temp1=start;
		temp2=NULL;
		while(j<p)
		   {
			temp2=temp1;
			temp1=temp1->link;
			j++;
			 }
			 temp2->link=temp1->link;
			 delete temp1;
	  };
	
	  int main()
	  {
		int n,ch,d,loc,i,node;
		list l;
		cout<<"Eneter_Nuber_Of_Nodes in list: ";
		cin>>n;
		cout<<"\n Enter element: ";
		while(i<n)
		{
			cin>>d;
			l.createList(d);
			i++;
		  }
		 l.display();
		  do
		  {
			cout<<"\n 1.Insert_First\n2.Insert_Last\n 3.Insert_At_Position\n4.Delete_First\n 5.Delete_Last\n 6.Delete_At_Position\n7.Count\n8.Exit\n";
cout<<"\n Enter_Your_Choice: ";
		cin>>ch;
		   switch(ch)
		   {
			case 1:cout<<"\n Enter The Data: ";
			cin>>d;
			 l.insertFirst(d);
			 l.display();
			break;
			case 2:cout<<"\n Enter The Data: ";
			cin>>d;
			l.insertLast(d);
			l.display();
			break;
			case 3:cout<<"\n Enter The Elememt: ";
			cin>>d;
			cout<<"Enter Position: ";
			cin>>loc;
			l.insertNode(loc,d);
			l.display();
			break;
			case 4: l.deleteFirst();
			l.display();
			break;
			case 5: l.deleteLast();
			l.display();
			break;
		    case 6:cout<<"\n Enter Position: ";
		cin>>loc;
		l.deleteNode(loc);
		l.display();
		    break;
		    case 7: l.count();
		    break;
		default:cout<<"Wrong Choice: ";
		    break;
			}			
		  }
		  while(ch<=7);
	  }


