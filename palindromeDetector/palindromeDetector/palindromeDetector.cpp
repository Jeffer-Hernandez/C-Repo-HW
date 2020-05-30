//
//  main.cpp
//  palindromeDetector
//
//  Created by Jeffer Hernandez on 3/24/20.
//  Copyright © 2020 Jeffer Hernandez. All rights reserved.
//

#include <iostream>
#include<iomanip>
#include <stdio.h>
#include <math.h>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

void reverse(const string str, string str2);
void pdromeDetector(const string str2,string str);
int main()
{
    string str2;
    string str;
    cout << "Please enter a word or phrase, I will check if it is a palindrome: " << endl;
    getline(cin, str);
    
    str2 = str;
    
    reverse(str, str2);
    pdromeDetector(str,str2);

    
    return 0;
}

void reverse(const string str, string str2)
{
    size_t numOfChars = str.size();
    
    if(numOfChars == 1){
        cout << str << endl;}
    else
    {
        cout << str[numOfChars - 1];
        reverse(str.substr(0, numOfChars - 1), str2);
        
        
    }
  
   
}

void pdromeDetector(string str,string str2){
    
    if (str == str2){
        cout<< "This is a palindrome!"<< endl;
    }
    
    else {
        cout<< "This is not a palindrome.."<< endl;
}
}
