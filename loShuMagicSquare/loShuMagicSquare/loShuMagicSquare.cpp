//
//  main.cpp
//  loShuMagicSquare
//
//  Created by Jeffer Hernandez on 4/17/20.
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

using namespace std;

void loShuMagicSquare(const int rows,
                      const int columns,
                      int magicSquare[rows][3],
                      int index,
                      int row1Total,
                      int row2Total,
                      int row3Total,
                      int column1Total,
                      int column2Total,
                      int column3Total,
                      int diagonal1,
                      int diagonal2);

int main(){
    
    const int rows = 3;
    const int columns = 3;
    int magicSquare[rows][columns];
    int index;
    int row1Total;
    int row2Total;
    int row3Total;
    int column1Total;
    int column2Total;
    int column3Total;
    int diagonal1;
    int diagonal2;
    string topSquarePositions[]={"top left", "top center", "top right"};
    string centerSquarePositions[]={"center left", "center most", "center rIght"};
    string lowerSquarePositions[]={"lower left", "lower center", "lower right"};
    
    cout << "Please enter any integers from 1 to 9 to create a 'Lo Shu Magic Sqaure'"<< endl;
    
    for (index = 0; index<3; index++){
        cout<< "Please enter a value for the "<< topSquarePositions[index] << "position: "<< endl;
        cin>> magicSquare[0][index];
    }
    
    for (index = 0; index<3; index++){
        cout<< "Please enter a value for the "<< centerSquarePositions[index] << "position: "<< endl;
        cin>> magicSquare[1][index];
    }
    
    for (index = 0; index<3; index++){
        cout<< "Please enter a value for the "<< lowerSquarePositions[index] << "position: "<< endl;
        cin>> magicSquare[2][index];
    }
    
    loShuMagicSquare(rows, columns, magicSquare, index, row1Total, row2Total, row3Total, column1Total, column2Total, column3Total, diagonal1, diagonal2);
    
    
    return 0;
}

void loShuMagicSquare(int rows,
                      int columns,
                      int magicSquare[rows][columns],
                      int index,
                      int row1Total,
                      int row2Total,
                      int row3Total,
                      int column1Total,
                      int column2Total,
                      int column3Total,
                      int diagonal1,
                      int diagonal2){
    for (index = 0; index < columns; index++){
        row1Total += magicSquare[0][index];
    }
    if (row1Total != 15){
        
        cout<< "This is not a Lo Shu Magic Square"<< endl;
    }
    
    for (index = 0; index < columns; index++){
        row2Total += magicSquare[1][index];
    }
    if (row2Total != 15){
        
        cout<< "This is not a Lo Shu Magic Square"<< endl;
    }
    for (index = 0; index < columns; index++){
        row3Total += magicSquare[0][index];
    }
    if (row3Total != 15){
        
        cout<< "This is not a Lo Shu Magic Square"<< endl;
    }
    for (index = 0; index < rows; index++){
        column1Total += magicSquare[index][0];
    }
    if (column1Total != 15){
        
        cout<< "This is not a Lo Shu Magic Square"<< endl;
    }
    for (index = 0; index < rows; index++){
        column2Total += magicSquare[index][1];
    }
    if (column2Total != 15){
        
        cout<< "This is not a Lo Shu Magic Square"<< endl;
    }
    for (index = 0; index < rows; index++){
        column3Total += magicSquare[index][2];
    }
    if (column3Total != 15){
        
        cout<< "This is not a Lo Shu Magic Square"<< endl;
    }
    
    for (index = 0; index < rows; index++){
        diagonal1 += magicSquare[index][index];
    }
    if (diagonal1 != 15){
        
        cout<< "This is not a Lo Shu Magic Square"<< endl;
    }
    for (index = 2; index < rows; index--){
        diagonal2 += magicSquare[index][index];
    }
    if (diagonal2 != 15){
        
        cout<< "This is not a Lo Shu Magic Square"<< endl;
    }
    
    else if (column1Total && column2Total && column3Total && row1Total && row2Total && row3Total && diagonal1 && diagonal2 == 15){
        cout<< "This is a Lo Shu Magic Square!" << endl;
    }
}
