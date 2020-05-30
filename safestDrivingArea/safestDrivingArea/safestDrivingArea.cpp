//
//  main.cpp
//  safestDrivingArea
//
//  Created by Jeffer Hernandez on 3/16/20.
//  Copyright © 2020 Jeffer Hernandez. All rights reserved.
//

#include <iostream>
#include<iomanip>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int getNumAccidents(int east, int west, int north, int south, int central);
void findLowest(int east, int west, int north, int south, int central);

int main() {
    

        

     int east; int west; int north; int south; int central;
    
    getNumAccidents(east, west, north, south, central);
    


    
return 0;
    
}


int getNumAccidents(int east, int west, int north, int south, int central){
    
 cout<< "How many accidents happened in the east? "<< endl;
 cin>> east;
 
 if (east< 1){
 cout<< "Please enter a positive number. "<< endl;
 cin>> east;
 }
 
 
 cout<< "How many accidents happened in the west? "<< endl;
 cin>> west;
 
 if (west< 1){
 cout<< "Please enter a positive number. "<< endl;
 cin>> west;
 }
 
 
 cout<< "How many accidents happened in the north? "<< endl;
 cin>> north;
 
 if (north< 1){
 cout<< "Please enter a positive number. "<< endl;
 cin>> north;
 }
 
 
 cout<< "How many accidents happened in the south? "<< endl;
 cin>> south;
 
 if (south< 1){
 cout<< "Please enter a positive number. "<< endl;
 cin>> south;
 }
 
 
 cout<< "How many accidents happened in the central? "<< endl;
 cin>> central;
 
 if (central< 1){
 cout<< "Please enter a positive number. "<< endl;
 cin>> central;
 }

    findLowest(east, west, north, south, central);
    
    return 0;
}

void findLowest(int east, int north, int south, int west, int central){
 
 if (east> north && east> west && east>  south && east> central){
 
 cout<< "The Eastern region had the most accidents at "<< east << endl;}
 
 else if (west> east && west> north && west> south && west> central){
 
 cout << "The Western region had the most accidents at " << west << endl;}
 
 else if (north > east && north> west && north> south && north> central){
 
 cout<< "The Northern region had the most accidents at " << north << endl;}
 
 else if (south> east && south> west && south> north && south> central){
 
 cout<< "The Southern region had the most accidents at "<< south<< endl;}
 
 else
 cout<< "The Central region had the most accidents at " << central<< endl;
 
 
 
    
    
    
}

