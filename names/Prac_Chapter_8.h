//
//  Prac_Chapter_8.h
//  Chapter8_Midterm2_Practice
//
//  Created by Brandon Johns on 3/17/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef Prac_Chapter_8_h
#define Prac_Chapter_8_h


#endif /* Prac_Chapter_8_h */

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <sstream>
#include "Prac_Chapter_8.h"
#include "Prac_Project_8.h"
using namespace std;

void space();
void space()
{
    cout<<"--------------------------------------------------------------------"<<endl;
    
}

////// Practice problem 1
void Prac_Eight_One();
void Prac_Eight_One()
{
    string line;
    string name;
    string age;
    string title;
    
    int posName=0;
    int posAge=0;
    char ans;
    
    do{
        cout<< "enter input in form Name Age Title: " <<endl;
        getline(cin,line);
        posName=line.find(" ");
        name=line.substr(0,posName);
        posAge=line.find(" ",posName+1);
        
        age=line.substr(posName+1, posAge-posName);
        title=line.substr(posAge+1,line.length());
        cout<<"name : " << name << " age: " <<age<< "title: " <<title <<endl;
        cout<< "again?: (y/n)" <<endl;
        cin>>ans;
    }while(ans=='y'||ans=='Y');
}




////// Practice problem 3
void Prac_Eight_Three();
void Prac_Eight_Three()
{
    string line;
    string firstIn;
    string lastIn;
    int posLast=0;
    char ans;
    
    do
    {
        cout<< "Enter first and last name seperated by space: " <<endl;
        getline(cin,line);
        firstIn=line.substr(0,1);
        posLast=line.find(" ");
        lastIn=line.substr(posLast+1,1);
        cout<<"initials: " << firstIn << " " << lastIn << endl;
        cout<< "more?: (y/n)"<<endl;
        cin>> ans;
        cin.ignore();
        
    }while(ans=='y'|| ans=='Y');
}
