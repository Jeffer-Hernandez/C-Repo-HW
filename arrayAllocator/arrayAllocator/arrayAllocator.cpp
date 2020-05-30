//
//  main.cpp
//  arrayAllocator
//
//  Created by Jeffer Hernandez on 4/28/20.
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
#include <ctime>

using namespace std;

int *getRandomNumbers(int);

int main() {

    int num = 5;
    
    int *numbers = nullptr; //TO POINT TO THE NUMBERS
    
    // GET AN ARRAY OF FIVE RANDOM NUMBERS
    numbers = getRandomNumbers(num);
    
    //DISPLAY THE NUMBERS
    for (int count = 0; count < num; count++){
        cout<< numbers[count]<< endl;
    }

    //FREE THE MEMORY
    delete [] numbers;
    numbers = nullptr;
    
    

    return 0;
}


int *getRandomNumbers(int num){
    
    int *arr = nullptr; // ARRAY TO HOLD THE NUMBERS
    
    // RETURN A NULL POINTER IF NUM IS ZERO OR NEGATIVE
    if (num <=0){
        return nullptr;}
    
    // DYNAMICALLY ALLOCATE THE ARRAY
    arr = new int[num];
    
    // SEED THE RANDOM NUMBER GENERATOR BY PAOSSING THE RETURN VALLUE OF TIME (0) TO SRAND.
    srand(time(0));
    
    //POPULATE THE ARRAY WITH RANDOM NUMBERS.
    for (int count = 0; count < num; count++)
        arr[count] = rand();
        
    //RETURN A POINTER TO THE ARRAY.
        return arr;
    
}
