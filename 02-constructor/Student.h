//
// Created by Zoljargal on 10/29/16.
//

#ifndef OOP_SAMPLES_STUDENT_H
#define OOP_SAMPLES_STUDENT_H


class Student {
    char* id;
    float gpa=0;
public:
    char* name;
    int level;
    Student(char[], char[], int);
    void set_all(char[], char[], int, float);
    void set_name(char[]);
    void set_id(char[]);
    void set_level(int);
    void set_gpa(float);
    char* get_name();
    char* get_id();
    int get_level();
    float get_gpa();
    void stdcopy(Student &);
    bool greatThan(Student &);
    bool lessThan(Student &);
    bool isEqual(Student &);
    bool before(Student &);
    bool after(Student &);
    ~Student();
};


#endif //OOP_SAMPLES_STUDENT_H
