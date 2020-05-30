//
//  main.cpp
//  lotteryWInnersModification
//
//  Created by Jeffer Hernandez on 4/24/20.
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
    
    const int numSize = 10;
    int chargeAccounts[numSize]={13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
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
    
    cout<< "Please enter this week's lottery ticket:"<< endl;
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
        cout<< "Try again next week."<< endl;
    }
    else {
        cout<< "You won!"<< endl;}
    
    
    
    
    
    
    return 0;
}
