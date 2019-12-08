//
//  Prac_Project_8.h
//  Chapter8_Midterm2_Practice
//
//  Created by Brandon Johns on 3/17/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef Prac_Project_8_h
#define Prac_Project_8_h


#endif /* Prac_Project_8_h */
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <sstream>
#include "Prac_Chapter_8.h"
#include "Prac_Project_8.h"
using namespace std;



void Project_Eight_three();
void Project_Eight_four();
void Project_Eight_Five();


/// 3
class projecteightthree
{
public:
    void read_and_clean(double & n);
    void new_line();
    void mainstuff();
    
};

void projecteightthree:: mainstuff()
{
    double n;
    char ans;
    do
    {
        cout << "Enter a double in any legal format."<< " return terminates. " << endl;read_and_clean(n);
        cout << "That string converts to the double "<< n << endl;
        cout << " Again? y/n " << endl;
        cin.get(ans);
        ans = tolower( ans);
        new_line();
    } while('y' == ans);
}
void projecteightthree:: read_and_clean(double & n)
{
    const int MAX_DBL_DIGITS = 15;
    
    const int ARRAY_SIZE = MAX_DBL_DIGITS + 7;
    
    char digit_string[ARRAY_SIZE];
    char next;
    cin.get(next);
    int index = 0;
    
    while ('.' != next && '\n' != next && 'E' != next && 'e' != next)
    {
        if((isdigit(next)) && (index < MAX_DBL_DIGITS))
        {
            digit_string[index] = next;
            index++;
        }
        cin.get(next);
    }
    if( '\n' == next)
    {
        digit_string[index] = '\0';
        n = atof(digit_string);
        return;
    }
    
    if('.' == next)
    {
        digit_string[index] = next;
        index++;
        cin.get(next);
    }
    while(next != 'E' && next != 'e' && next != '\n')
    {
        if((isdigit(next)) && (index < MAX_DBL_DIGITS))
        {      digit_string[index] = next;
            index++;
        }    cin.get(next);
    }
    if('\n' == next)
    {
        digit_string[index] = '\0';
        n = atof(digit_string);
        return;
    }
    digit_string[index] = next;
    index++;
    cin.get(next);  if('-' == next || '+' == next)
    {
        digit_string[index] = next;
        index++;
        cin.get(next);
    }
    else if('\n' == next)
    {
        index = index - 1;
        digit_string[index] = '\0';
        n = atof( digit_string);
        return;
    }
    int exp_count = 0;  while(next != '\n')
    {
        if((isdigit(next)) && (index < ARRAY_SIZE)&& exp_count < 3)
        {      digit_string[index] = next;
            exp_count++;
            index++;
        }
        cin.get(next);
    }
    digit_string[index] = '\0';
    n = atof(digit_string);
    return;
}
void projecteightthree:: new_line()
{
    char symbol;
    do
    {
        cin.get(symbol);
    } while (symbol != '\n');
}

///// 4
void Project_Eight_four()
{
    string First_Name;
    string Middle_Name;
    string Last_Name;
    cout<<" Enter first middle and last name" <<endl;
    cin>>First_Name>> Middle_Name;
    getline(cin,Last_Name);
    if(Last_Name=="")
    {
        Last_Name=Middle_Name+',';
        Middle_Name="";
    }
    else
    {
        Last_Name=Last_Name+',';
        Middle_Name=Middle_Name.substr(0,1)+".";
        
    }
    cout<< endl<< " the formated name of the person: "<<Last_Name<<First_Name<<Middle_Name<<endl;
}

///////5

void Project_Eight_Five()
{
    string sentence = "";
    string finalSentence = "";
    string tempStr = "";
    cout << "Please enter a sentence." << endl;
    getline(cin, sentence);
    stringstream ss;
    ss << sentence;
    while(!ss.eof())
    {
        ss >> tempStr;
        // if it has a length of 4
        if(tempStr.length() == 4)
        {
            if(isupper( tempStr[0] )) // check for caps
            {
                finalSentence += "Love ";
            }
            else
            {
                finalSentence += "love ";
            }
        }
        else
        {
            finalSentence += tempStr + " ";
        }
    }
    cout << "\nFinal Sentence: \n" << finalSentence << endl;
}
