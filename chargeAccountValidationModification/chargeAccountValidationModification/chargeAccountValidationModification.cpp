//
//  main.cpp
//  chargeAccountValidationModification
//
//  Created by Jeffer Hernandez on 4/21/20.
//  Copyright © 2020 Jeffer Hernandez. All rights reserved.
//

#include <iostream>
#include <iostream>
#include<iomanip>
#include <stdio.h>
#include <math.h>
#include <string>
#include <time.h>
#include <cstdlib>
#include <fstream>
#include <string.h>

using namespace std;


int main(){
    
    const int numSize = 18;
    int chargeAccounts[numSize]={5658845,4520125, 7895122,8777541,8451277,1302850,8080152,4562555,5552012,5050552,7825877,1250255,1005231,6545231,3852085,7576651,7881200,4581002};
    
    int index;
    int first = 0;
    int last = numSize -1;
    int middle;
    bool found =false;
    int position = -1;
    int value;
    int mindIndex;
    int minValue;
    
    //SELECTION SORT
    for (int start = 0; start< (numSize -1); start++){
        mindIndex = start;
        minValue = chargeAccounts[start];
        
        for (index = start +1; index< numSize;index++){
            if (chargeAccounts[index]< minValue){
                minValue = chargeAccounts[index];
                mindIndex = index;
            }
        }
        swap (chargeAccounts[mindIndex], chargeAccounts[start]);
    }
    
    cout<< "Please enter 7 digit number for validation:"<< endl;
    cin>> value;
    
    
    //BINARY SEARCH
    while (!found && first <= last){
        middle = (first + last) / 2;
        if (chargeAccounts[middle] == value){
            found = true;
            position = middle;
        }
            else if (chargeAccounts[middle] > value)
                last =  middle - 1;
        else
            first = middle + 1;
    }
    
    if (position == -1){
        cout<< "That number is not valid"<< endl;
    }
    else {
        cout<< "That number is valid"<< endl;}
    
    
    

    
    
    return 0;
}
