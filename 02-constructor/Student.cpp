//
// Created by Zoljargal on 10/29/16.
//

#include <string.h>
#include "Student.h"


Student::Student(char _name[] = "", char _id[] = "", int _level = 1){
    set_all(_name, _id, _level, 0);
}

void Student::set_all(char _name[], char _id[], int _level, float _gpa){
    set_name(_name);
    set_id(_id);
    set_level(_level);
    set_gpa(_gpa);
}
void Student::set_name(char _name[]){
    name = new char[sizeof(_name+1)];
    strcpy(name,_name);
}
void Student::set_id(char _id[]){
    id = new char[sizeof(_id+1)];
    strcpy(id,_id);
}
void Student::set_level(int _level){
    if(_level>0 && _level <= 8)
        level = _level;
    else
        level = 1;
}
void Student::set_gpa(float _gpa){
    if(_gpa>0 && _gpa<=4)
        gpa = _gpa;
    else
        gpa = 0;
}
char* Student::get_name(){
    return name;
}
char* Student::get_id(){
    return id;
}
int Student::get_level(){
    return level;
}
float Student::get_gpa(){
    return gpa;
}

void Student::stdcopy(Student &s){
//    name = new char[sizeof(s.get_name())+1];
//    strcpy(name,s.get_name());
//    id = new char[sizeof(s.get_id())+1];
//    strcpy(id,s.get_id());
//    level = s.get_level();
//    gpa = s.get_gpa();

    set_all(s.name, s.id, s.level, s.gpa);
}

bool Student::greatThan(Student &s){
    if(level>s.get_level())
        return true;
    else
        return false;
}
bool Student::lessThan(Student &s){
    return !greatThan(s);
}
bool Student::isEqual(Student &s){
//    if(level==s.get_level())
//        return true;
//    else
//        return false;

    return level==s.get_level();
}
bool Student::after(Student &s){
    if(strcmp(name,s.get_name())>1)
        return true;
    else
        return false;
}
bool Student::before(Student &s){
    return !after(s);
}

Student::~Student(){
    delete []name;
    delete []id;
}

