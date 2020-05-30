//
//  main.cpp
//  rainFallStatistics
//
//  Created by Jeffer Hernandez on 3/29/20.
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
    
  
    const int length = 12;
    double year[length];
    double total;
    int count;
    double highest;
    double lowest;
    string highestMonth;
    string lowestMonth;
    
    
    string month[]={"January", "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};
   
    
    for (int index = 0; index < length; index++){
        cout<< "Please enter the amount of rain that fell in "<< month[index]<< ": " << endl;
        cin>> year[index];
        
    }
    
    
        
    
    
    for (auto val : year){
        total+=val;
    }
    // total is now the sum of all the numbers in the vector.
    
    
    double averageRainfall = total/ length;
    // averageRainfall is now the average monthly rain fall for the entire year.
    
    
    highest = year[0];
    
    for (count = 1; count< length; count++){
        
        if (year[count]> highest){
            highest = year[count];
        }
    }
    
    lowest = year[0];
    
    for (count = 1; count< length; count++){
        
        if (year[count]< lowest){
            lowest = year[count];
        }
    }
    
    // we have the highest and lowest months saved in the appropriate variable.
    
    if (year[0]== lowest){
        lowestMonth = "January";
        
    }
    else if (year[1] == lowest){
        lowestMonth = "February";
    }
    else if (year[2] == lowest){
        lowestMonth = "March";
    }
    else if (year[3] == lowest){
        lowestMonth = "April";
    }
    else if (year[4] == lowest){
        lowestMonth = "May";
    }
    else if (year[5] == lowest){
        lowestMonth = "June";
    }
    else if (year[6] == lowest){
        lowestMonth = "July";
    }
    else if (year[7] == lowest){
        lowestMonth = "August";
    }
    else if (year[8] == lowest){
        lowestMonth = "September";
    }
    else if (year[9] == lowest){
        lowestMonth = "October";
    }
    else if (year[10] == lowest){
        lowestMonth = "November";
    }
    else if (year[11] == lowest){
        lowestMonth = "December";
    }
    
    //-----------------------------------
    
    if (year[0]== highest){
        highestMonth = "January";
        
    }
    else if (year[1] == highest){
        highestMonth = "February";
    }
    else if (year[2] == highest){
        highestMonth = "March";
    }
    else if (year[3] == highest){
        highestMonth = "April";
    }
    else if (year[4] == highest){
        highestMonth = "May";
    }
    else if (year[5] == highest){
        highestMonth = "June";
    }
    else if (year[6] == highest){
        highestMonth = "July";
    }
    else if (year[7] == highest){
        highestMonth = "August";
    }
    else if (year[8] == highest){
        highestMonth = "September";
    }
    else if (year[9] == highest){
        highestMonth = "October";
    }
    else if (year[10] == highest){
        highestMonth = "November";
    }
    else if (year[11] == highest){
        highestMonth = "December";
    }
 
    
    // we have the appropriate month STRING assigned to the HIGHEST and LOWEST rainfall.
    
    
    cout<< "The total rainfall for the year is: "<< fixed<< setprecision(2) << total << endl;
    cout<< "The average monthly rain fall is: "<< fixed<< setprecision(2) << averageRainfall << endl;
    cout<< "The month with the highest rainfall is "<< fixed<< setprecision(2) << highestMonth << " with " << highest << endl;
    cout<< "The month with the lowest rainfall is "<< fixed<< setprecision(2) << lowestMonth << " with " <<lowest<< endl;
    
    
    return 0;
    
}
