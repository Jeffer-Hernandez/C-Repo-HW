//
//  main.cpp
//  chargeAccountValidation
//
//  Created by Jeffer Hernandez on 4/20/20.
//  Copyright © 2020 Jeffer Hernandez. All rights reserved.
//

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
    
    int index=0;
    bool found =false;
    int position = -1;
    int value;
    
    cout<< "Please enter 7 digit number for validation:"<< endl;
    cin>> value;
    
    
    while (index< numSize && !found){
        
        if (chargeAccounts[index] == value){
            found = true;
            position = index;}
        
        index++;
    }
    
    if (position == -1){
        cout<<"THis number is not valid"<< endl;
        
    }
    else cout<< "This number is valid"<< endl;
    
    
    return 0;
}
