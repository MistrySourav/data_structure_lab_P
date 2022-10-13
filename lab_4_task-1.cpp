#include <iostream>

using namespace std;

public:
{


int age;
float cgpa;
string name;

student(string name,int age,float cgpa)
{

    this->name=name;
    this->age=age;
     this->cgpa=cgpa;
}
}
int main()
{
    int min_index=0 ;
   student temp =0;
    int temp=0;


    student s1("steve",73,3.8);
    student s2("halk",35,3.78);
    student s3("tony",33,3.88);
    student s4("natasha",28,3.867);
    student s5("fury",66,3.758);

    student Student={s1,s2,s3,s4,s5};



    for(int i=0; i<6; i++)
        {
        min_index = i;

        for(int j=i+1; j<6; j++)
            {
            if(Student[min_index].cgpa > Student[j].cgpa)
            {
                min_index = j;
            }
            }

        temp = Student[min_index];
        Student[min_index] = Student[i];
        Student[i] = temp;
    }

    for(int i=0; i<6;i++){
        cout<<Student[i]<<" ";
    }

    cout<<endl;

    return 0;
}
