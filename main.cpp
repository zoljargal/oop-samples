#include <iostream>
#include "01-class/Line.h"
#include "02-constructor/Student.h"

using namespace std;

void run_class();
void run_student();

int main() {
    cout<<"Enter one"<<endl;
    cout<<"\t1 for class"<<endl;
    cout<<"\t2 for constructor"<<endl;

    int command=0;
    cin>>command;
    switch (command){
        case 1:
            run_class();
            break;
        case 2:
            run_student();
            break;
    }
    return 0;
}


void run_class() {
    Line l;

    l.setX1(2);
    l.setX2(3);
    l.setY1(2);
    l.setY2(3);

    cout<<"line points are: "<<l.getX1()<<":"<<l.getY1()<<endl;
    cout<<"line points are: "<<l.getX2()<<":"<<l.getY2()<<endl;
    if(l.isLine())
        cout<<"length="<<l.calculateLength();
    else
        cout<<"not line";
}


void sort_student_name(Student[], int);
void sort_student_level(Student[], int);

void run_student(){

    Student s[10] = {
            Student ("Anu","15b1seas1249",2),
            Student ("Bat","14b1seas4222",3),
            Student ("Bilguun","15b1seas0991",2),
            Student ("Erdene","14b1seas1249",3),
            Student ("Tengis","13b1seas1249",4),
            Student ("Anand","16b1seas1249",1),
            Student ("Bold","15b1seas1249",2),
            Student ("Nomin","13b1seas1249",4),
            Student ("Zaya","14b1seas1249",3),
            Student ("Dulguun","13b1seas1249",4)
    };

    cout << "#\t" << "Name\t" << "ID\t\t" << "Level\t" << "GPA" << endl;
    for(int i=0; i<10; i++){
        cout << i << ":\t" << s[i].get_name() << "\t" << s[i].get_id() << "\t" << s[i].get_level() << "\t" << s[i].get_gpa() << endl;
    }
    cout << "--- Sort Name ---" << endl;
    sort_student_name(s,10);
    for(int i=0; i<10; i++){
        cout << i << ":\t" << s[i].get_name() << "\t" << s[i].get_id() << "\t" << s[i].get_level() << "\t" << s[i].get_gpa() << endl;
    }
    cout << "--- Sort Level ---" << endl;
    sort_student_level(s,10);
    for(int i=0; i<10; i++){
        cout << i << ":\t" << s[i].get_name() << "\t" << s[i].get_id() << "\t" << s[i].get_level() << "\t" << s[i].get_gpa() << endl;
    }
}


void sort_student_name(Student s[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(s[i].after(s[j])){
                Student temp("", "", 0);
                temp.stdcopy(s[i]);
                s[i].stdcopy(s[j]);
                s[j].stdcopy(temp);
            }
        }
    }
}

void sort_student_level(Student s[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(s[i].greatThan(s[j])){
                Student temp("", "", 0);
                temp.stdcopy(s[i]);
                s[i].stdcopy(s[j]);
                s[j].stdcopy(temp);
            }
            else if(s[i].isEqual(s[j])){
                if(s[i].after(s[j])){
                    Student temp("", "", 0);
                    temp.stdcopy(s[i]);
                    s[i].stdcopy(s[j]);
                    s[j].stdcopy(temp);
                }
            }
        }
    }
}