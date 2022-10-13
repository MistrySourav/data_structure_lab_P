#include <iostream>

using namespace std;

class student
{
public:
    string name;
    int age;
    float cgpa;

    student()
    {

    }

    student(string name,int age ,float cgpa)
    {
        this->name=name;
        this->age=age;
        this->cgpa=cgpa;

    }
};

int main()
{
    student s1("steve",73,3.8);
    student s2("halk",35,3.78);
    student s3("tony",33,3.88);
    student s4("natasha",28,3.867);
    student s5("fury",66,3.758);
    student s6("john",46,3.78);

    student arr[]={s1,s2,s3,s4,s5,s6};

    cout<<"Given Details are : "<<endl;
    for(int i=0;i<6;i++)
    {
          cout<<arr[i].name<<"  ";

           cout<<arr[i].age<<"  ";

           cout<<arr[i].cgpa<<"  ";

           cout<<endl;
    }


    cout<<endl;

    int min_index=0;

    student temp;

    for(int i=0; i<6; i++)
        {

        min_index = i;

        for(int j=i+1; j<6; j++)

        {
            if(arr[min_index].cgpa > arr[j].cgpa){
                min_index = j;
            }
        }

        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;

     }


         cout<<"After Sorting Details are : "<<endl;

    for(int i=0; i<6;i++)
        {
          cout<<arr[i].name<<" ";


        cout<<arr[i].age<<" ";

        cout<<arr[i].cgpa<<" "<<endl;

        }



    return 0;
}
