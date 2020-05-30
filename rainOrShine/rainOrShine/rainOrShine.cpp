//
//  main.cpp
//  rainOrShine
//
//  Created by Jeffer Hernandez on 4/13/20.
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
    int juneRainCount;
    int julyRainCount;
    int augustRainCount;
    int juneCloudCount;
    int julyCloudCount;
    int augustCloudCount;
    int juneSunCount;
    int julySunCount;
    int augustSunCount;
    int rainyTotal;
    int cloudyTotal;
    int sunnyTotal;
    string rainiest;
    


    const int month = 3;
    const int day = 30;
    char weather[month][day];
    int index;
    ifstream inputFile;
    
    inputFile.open("RainOrShine.txt");
    
    if (inputFile) {
        
        for (int index = 0; index < day; index++){
            inputFile >> weather[0][index];
           
            
            if (weather[0][index] == 'R') {
                juneRainCount+=1;}
            
            else if (weather[0][index] == 'C'){
                juneCloudCount+=1;}
            
            else if (weather[0][index] == 'S'){
                juneSunCount+=1;}
            }
        
        for (int index = 30; index<60; index++){
            inputFile>> weather[1][index];
            
    
            if (weather[1][index] == 'R'){
                julyRainCount+=1;}
            
            else if (weather[1][index] == 'C'){
                julyCloudCount+=1;}
            
            else if (weather[1][index] == 'S'){
                julySunCount+=1;}
            }
        
        for (int index = 60; index<90; index++){
            inputFile>> weather[2][index];
            
            if (weather[2][index] == 'R'){
                augustRainCount+=1;}
            
            else if (weather[2][index] == 'C'){
                augustCloudCount+=1;}
            
            else if (weather[2][index] == 'S'){
                augustSunCount+=1;}
        
            }
        
        
        inputFile.close();
    
    
       // else if (!inputFile);
       //     cout<< "Error opening the file!"<< endl;
       
        

   
    rainyTotal = juneRainCount + julyRainCount + augustRainCount;
    sunnyTotal = juneSunCount + julySunCount + augustSunCount;
    cloudyTotal = juneCloudCount + julyCloudCount + augustCloudCount;
    
        
        
        
        
    

    cout<< "August Rainy Days: "<< augustRainCount<< endl;
    cout<< "July Rainy Days: "<< julyRainCount<< endl;
    cout<< "June Rainy Days: " << juneRainCount << endl;
    cout<< "Total rain this summer: " << rainyTotal<< endl;
    cout<< "August Cloudy Days: "<< augustCloudCount << endl;
    cout<< "July Cloudy Days: " << julyCloudCount<< endl;
    cout<< "June Cloudy Days: "<< juneCloudCount<< endl;
    cout<< "Total cloudy days this summer: " << cloudyTotal << endl;
    cout<< "August Sunny Dyas:  "<< augustSunCount << endl;
    cout<< "July Sunny Days: "<< julySunCount<< endl;
    cout<< "June Sunny Days: "<< juneSunCount << endl;
    cout<< "Total sunny days this summer :"<< sunnyTotal << endl;
    
        if (juneRainCount && julyRainCount < augustRainCount){
            cout<< "The rainiest month of the summer was August"<< endl;}
        
        else if (augustRainCount && julyRainCount < juneRainCount){
            cout<< "The rainiest month of the summer was June"<< endl;}
        
        else if (augustRainCount && juneRainCount < julyRainCount){
            cout<< "The rainiest month of the summer was July"<< endl;}
        
    

    
    return 0;
}
}
    
