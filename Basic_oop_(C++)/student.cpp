#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    float gpa;
    int marks[5];
    bool status = true;

    Student(int arr[])
    {
        float sum = 0;
        for(int i = 0 ; i < 5 ; i++){
            if(arr[i]>100 || arr[i]<0)
            {
                cout<< "Invalid number, Please enter a valid number : ";
                int num;
                cin>>num;
                arr[i] = num;
            }
              marks[i] = arr[i];

              if(arr[i]>80)
              {
                  sum +=5;
              }
               else if(arr[i]>70)
              {
                  sum +=4;
              }
              else if(arr[i]>60)
              {
                  sum +=3.5;
              }
              else if(arr[i]>50)
              {
                  sum += 3;
              }
              else if(arr[i]>40)
              {
                  sum +=2.5;
              }
              else
              {
                  sum +=2;
              }
        }
        gpa = sum/5;
        if(gpa<3.00)
        {
            status = false;
        }
    }
};

Student* storeMarks(int num)
{
    cout<< "Provide marks for student no : "<<num<<endl;
    int arr[5];
    for(int i = 0 ; i < 5 ; i++){
          cin>>arr[i];
    }
    Student *student = new Student(arr);
    return student;
}

int main(){
    int n;
    cout<< "Give the number of students :  "<<endl;
    cin>>n;

    Student *student[n];

    for(int i = 0 ; i < n ; i++){
          student[i] = storeMarks(i+1);

    }

    for(int i = 0 ; i < n ; i++){
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Gpa for student "<<i+1<< " is : " ;
        cout<<student[i]->gpa<<endl;
        if(student[i]->status)
        {
            cout<< "Status : Passed."<<endl;
        }
        else{
            cout<< "Status : Fail."<<endl;
        }
        cout<< "Marks for student "<<i+1<<endl;
         for(int k = 0 ; k < 5 ; k++){
                cout<<student[i] -> marks[k]<< " ";
         }
    cout<<endl;

    }
    return 0;
}

