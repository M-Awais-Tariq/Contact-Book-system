#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <windows.h>
#include <phonebook.h>
using namespace std;
class  Node
{
	private:
	phonebook Data
	Node* Next;
	public:
//constructor
	Node();

// getters
	phonebook GetData();
	Node* GetNext();
    
// setters
	void SetData(phonebook)
	void SetNext(Node*);
        
};
Node::Node()
{
	
}

void Node::SetData(phonebook Data)
{
	this.Data = Data;
}
void Node::SetNext(Node* Next)
{
	this->Next=Next;
}
Node* Node::GetNext()
{
	return Next;
}
phonebook Node::GetData()
{
	return Data;
}
// Node class ended
	

class LinkList
{
private:
	Node* Start=NULL;
public:
void Menu();
void AddRecord(phonebook);
void DisplayRecord();
void SearchRecord();
void Delete();
void Update();
};
void LinkList::Menu(){
	int choice;
	char ch;
	while(true){
	
	
	system("CLS");
	
  	cout<<"\n\t\t\t      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout<<"\n\t\t\t      $                               $";
    cout<<"\n\t\t\t      $                               $";
	cout<<"\n\t\t\t      $ PHONE BOOK MANAGEMENT SYSTEM  $";
    cout<<"\n\t\t\t      $                               $";
	cout<<"\n\t\t\t      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
		
	cout<<"\n\n";
	cout<<"\n\t\t\t $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	cout<<"\n\t\t\t $                               $";
	cout<<"\n\t\t\t $      MAIN MENU                $"; 
	cout<<"\n\t\t\t $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	
	cout<<"\n\t\t\t1): Add  contacts :";
	cout<<"\n\t\t\t2):Display  contacts :";
	cout<<"\n\t\t\t3):Search contact :";
	cout<<"\n\t\t\t4):Upadte contacts :";
	cout<<"\n\t\t\t5):Delete contact :";
	cout<<"\n\t\t\t6):Exit :\t\t";
	
	cout<<"Enter your choice :";
	cin>>choice;
	
	if(choice==6)
	break;
	switch(choice){
		
		
		case 1:
				system("CLS");
				AddRecord();
				break;
			
		case 2:
				DisplayRecord();
				break;
		
		case 3:
			do{
				SearchRecord();
				cout<<"Do you want to search another contact \n";
				cout<<"(y/Y) for yess (n/N) for No:\n";
				cin>>ch;
			}while(ch=='y'||ch=='Y');
			 break;
		
					
     }
  } 
}
void LinkList::AddRecord(phonebook p1)
{
	ofstream writefile;
	writefile.open("Contacts.txt",ios::app);
	
	Node* NewNode = new Node();
	NewNode->SetData(p1);
	Node* temp = Start;
	if (temp!=NULL)
	{
		while (temp->GetNext()!= NULL)
		{
			temp = temp->GetNext();
		}
		
		temp->SetNext(NewNode);
	}
	else
	{
		Start = NewNode;
	}
   
   writefile.close();
   cout<<"Your record added successfully :";
}
void LinkList::DisplayRecord()
{
	system("cls");
	string line;
	ifstream readfile;
	readfile.open("Contacts.txt",ios::in);
	while(!readfile.eof())
    {
    getline(readfile,line);
	cout<<line<<endl;
	}
	
	readfile.close();
	system("pause");
}
 
int main(){
	system("CLS");

	Phonebook rec;	
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 11;

	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);
		
		
		cout<<"\n\t\t\t\t  $$$$$$$$$$$$$$$$$$$$$$$$$$$";
		cout<<"\n\t\t\t\t  $                         $";
		cout<<"\n\t\t\t\t  $                         $";		
		cout<<"\n\t\t\t\t  $      WELCOME SIR        $";
		cout<<"\n\t\t\t\t  $$$$$$$$$$$$$$$$$$$$$$$$$$$";
		cout<<"\n\n\n";
		cout<<"\n\t\t\t      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
        cout<<"\n\t\t\t      $                               $";
        cout<<"\n\t\t\t      $                               $";
		cout<<"\n\t\t\t      $ PHONE BOOK MANAGEMENT SYSTEM  $";
        cout<<"\n\t\t\t      $                               $";
		cout<<"\n\t\t\t      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	
		cout<<"\n\n\n";	
		cout<<"\n\t\t\t\t    *                * ";
		cout<<"\n\t\t\t\t    *                * ";
		cout<<"\n\t\t\t\t    *                * ";
		cout<<"\n\t\t\t\t    *                * ";
		cout<<"\n\t\t\t\t    ****************** \n\n\n: ";
		system("pause");
		
		
	rec.Menu();
	return 0;
}
