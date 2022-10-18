#include <iostream>

using namespace std;

class student
{
public:
    string name;
    int id;
    float cgpa;
    int cc;
    Student()
    {

    }

    Student(string name,int age ,float cgpa,int cc)
    {

    }
    void setname(string name)
    {
      this->name=name;
    }
    void setcgpa(float cgpa)
    {
      this->cgpa=cgpa;
    }
    void setid(int id)
    {
      this->id=id;
    }
    void setcc(int cc)
    {
      this->cc=cc;
    }
};

int main()
{

        int n;
        string name;
         int id;
        float cgpa;
        int cc;
        cout<<"enter number of Students"<<endl;
        cin>>n;
    student Student[n];
        for(int i=0;i<n;i++)
        {

          cout<< "give Student info:"<<i+1<<endl;

          cout<< "enter Student id"<<endl;
         cin>>id;
         Student[i].setid(id);
         cout<<"enter Student name"<<endl;
         cin>>name;
         Student[i].setname(name);
         cout<<"enter Student cgpa"<<endl;
         cin>>cgpa;
         Student[i].setcgpa(cgpa);

         cout<<"enter Student cradit"<<endl;
         cin>>cc;
         Student[i].setcc(cc);
        }

        cout<<endl;
          for(int i=0;i<n;i++)
        {
            cout<<"details of Student"<<i+1<< ":" <<endl;
          cout<< " Student id"<<endl;
         cout<<Student[i].id;
         cout<<" Student name"<<endl;
        cout<<Student[i].name;
         cout<<" Student cgpa"<<endl;
         cout<<Student[i].cgpa;
         cout<<" Student cradit"<<endl;
         cout<<Student[i].cc;
        }

        int a;

        cout<<"press 1 for bubble sorting"<<endl;
                cout<<"press 3 for bubble sorting"<<endl;

        cin>>a;
        int temp=0;
        switch(a)
        {

    case 1:
        {
        for(int i=0; i<n-1; i++)
        {

        for(int j=i+1; j<(n-i-1); j++)

        {
            if(Student[j].cgpa > Student[j+1].cgpa)
                {
        temp = Student[j].cgpa;
        Student[j].cgpa = Student[j+1].cgpa;
        Student[j+1].cgpa = temp;

     }


        }
        }


        for(int i=0; i<n;i++)
        {

        cout<<Student[i].cgpa<<" "<<endl;

        cout<<Student[i].name<<" "<<endl;

        cout<<Student[i].id<<" "<<endl;

        cout<<Student[i].cc<<" "<<endl;

        }

        }

    case 3:
        float b;
        cout<<"enter cgpa:"<<endl;
        cin>>b;
        for(int i=0; i<n;i++)
        {

            if(Student[i].cgpa==b)
        {

        cout<<Student[i].cgpa<<" "<<endl;

        cout<<Student[i].name<<" "<<endl;

        cout<<Student[i].id<<" "<<endl;

        cout<<Student[i].cc<<" "<<endl;

        }

        else
        {
        cout<<"not match"<<endl;
        }
        }
        }

    return 0;
}
