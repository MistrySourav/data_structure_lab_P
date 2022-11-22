#include <iostream>

using namespace std;


class student{

public:


    int roll;
    string id;
    student *next;
};

void getstudent(int roll,string id)
{
    this->roll=roll;
    this->id=id;

}



class LinkedList{

private:
    student *head;
    student *tail;

public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }

    void createNewstudent(student details)
    {
        student *temp = new student();
        temp->details = details;

        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }

    void ShowList(){
        while(head->next != NULL){
            cout<<"Student roll is : "<<head->details.roll<<endl;
            cout<<"Student id is : "<<head->details.id<<endl;
            head = head->next;
            cout<<endl<<endl;
        }
    }
};

int main()
{

   LinkedList *myList = new LinkedList();

   /*myList->createNewstudent(30,"s3987");
   myList->createNewstudent(50,"e3655");
   myList->createNewstudent(70,"u3321");
   myList->createNewstudent(10,"p3462");
   myList->createNewstudent(90,"p3243");
   myList->ShowList();*/

    return 0;
}
