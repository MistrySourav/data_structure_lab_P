#include <iostream>
using namespace std;

class Student
{
public:

    string name;
    int id;

    void getdetails()
    {

        cout<<" Enter student Name :";
        cin>>name;

        cout<<"Enter student ID:";
        cin>>id;

        cout<<endl;
        cout<<"_____________________________";

        cout<<endl;
    }
};

class node{

public:

    Student details;
    node *next;
    node *sorted;
};


class LinkedList{

private:
    node *head;
    node *tail;
    node *sorted;


public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
        this->sorted = NULL;

    }

    void newnode(Student details)
    {
        details.getdetails();
        node *temp = new node();
        temp->details = details;
        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }






    void ShowList(){

        while(head->next != NULL)
        {
            cout<<"Student name :"<<head->details.name<<endl;
            cout<<"Student id :"<<head->details.id<<endl;
            head = head->next;
        }

    }
};

int main()
{

   LinkedList *details_list = new LinkedList();

  Student a,b,c,d,e;
   details_list->newnode(a);
   details_list->newnode(b);
   details_list->newnode(c);
   details_list->newnode(d);
   details_list->newnode(e);
   details_list->ShowList();

  /// details_list->insertionSort(node* temp1)

  /// details_list->ShowList();

    return 0;
}


