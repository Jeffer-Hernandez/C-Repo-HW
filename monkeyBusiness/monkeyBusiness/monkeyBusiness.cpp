//
//  main.cpp
//  monkeyBusiness
//
//  Created by Jeffer Hernandez on 4/6/20.
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




int main(){
    
    const int monkeysize = 3;
    const int daysize = 5;
    string week[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    string monkeyNames[]={"Snap" , "Crackle" , "Pop"};
    double monkey[monkeysize][daysize];
  
    
    double highest=0;
    double lowest=0;
    string highestSalsa;
    string lowestSalsa;
    double mondayTotal;
    double tuesdayTotal;
    double wednesdayTotal;
    double thursdayTotal;
    double fridayTotal;
    double mondayAvg;
    double tuesdayAvg;
    double wednesdayAvg;
    double thursdayAvg;
    double fridayAvg;
    int index;
    int count;
    
    
    
    
    for (int index = 0; index < daysize; index++){
        cout<< "Please enter the number of pounds consumed by "<< monkeyNames[0] << " on " << week[index] << endl;
        cin>> monkey[0][index];
        
    }
    
    for (int index = 0; index < daysize; index++){
        cout<< "Please enter the number of pounds consumed by "<< monkeyNames[1] << " on " << week[index] << endl;
        cin>> monkey[1][index];
        
    }
    
    for (int index = 0; index < daysize; index++){
        cout<< "Please enter the number of pounds consumed by "<< monkeyNames[2] << " on " << week[index] << endl;
        cin>> monkey[2][index];
        
    }
    
    // Accept input for each day for each monkey.
    
    
    for (count = 0; count<monkeysize ; count++){
        mondayTotal+= monkey[count][0];
        tuesdayTotal+= monkey[count][1];
        wednesdayTotal+= monkey[count][2];
        thursdayTotal+= monkey[count][3];
        fridayTotal+= monkey[count][4];
    }
    
    // Each day's total amount of food is identified.
    
    mondayAvg = mondayTotal/ monkeysize;
    tuesdayAvg = tuesdayTotal/ monkeysize;
    wednesdayAvg = wednesdayTotal/ monkeysize;
    thursdayAvg = thursdayTotal/ monkeysize;
    fridayAvg = fridayTotal/ monkeysize;
    
    // Daily average identified for the entire family.
    
    cout<< "The average amount of food eaten by the family on Monday is: "<< fixed<< setprecision(2)<< mondayAvg<< endl;
    cout<< "The average amount of food eaten by the family on Tuesday is: "<< fixed<< setprecision(2)<< tuesdayAvg<< endl;
    cout<< "The average amount of food eaten by the family on Wednesday is: "<< fixed<< setprecision(2)<< wednesdayAvg<< endl;
    cout<< "The average amount of food eaten by the family on Thursday is: "<< fixed<< setprecision(2)<< thursdayAvg<< endl;
    cout<< "The average amount of food eaten by the family on Friday is: " << fixed<< setprecision(2)<< fridayAvg<< endl;
  
    
   // REPORT AVERAGE FOOD FOR EACH DAY FOR ENTIRE FAMILY
    

    
        for (count = 0; count< daysize; count++){
        if (monkey[0][count]> highest){
            highest = monkey[0][count];
        }
        }
    
        for (count = 0; count< daysize; count++){
        if (monkey[1][count]> highest){
            highest = monkey[1][count];
        }
        }
        for (count = 0; count< daysize; count++){
        if (monkey[2][count]> highest){
            highest = monkey[2][count];
        }
        }
    
    // Found HIGHEST NUMBER in 2D DATA SET.
    
    lowest = highest;
    
        for (count = 0; count< daysize; count++){
        if (monkey[0][count]<= lowest){
            lowest = monkey[0][count];
        }
        }
    
        for (count = 0; count< daysize; count++){
        if (monkey[1][count]<= lowest){
            lowest = monkey[1][count];
        }
        }
    
        for (count = 0; count< daysize; count++){
        if (monkey[2][count]<= lowest){
            lowest = monkey[2][count];
        }
        }
    
    // Found LOWEST NUMBER  in 2D DATA SET
    
    cout<< "The largest amount of food eaten by any monkey this week was: "<< highest<< endl;
    cout<< "The lowest amount of food eaten by any monkey this week was: " << lowest<< endl;
    
    
    
 
    return 0;
    
}
