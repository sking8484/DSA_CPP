//
//  main.cpp
//  2dArray
//
//  Created by darst king on 6/2/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int rows=4,columns=5;
    
    
    int A[rows][columns];
    for (int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<A[i][j]<<" ";
        } cout<<endl;
    }
    
    
    //Pointer Method
    
    int *K[3];
    
    K[0]=new int[4];
    K[1] = new int [4];
    K[2] = new int [4];
    
    
    return 0;
}
