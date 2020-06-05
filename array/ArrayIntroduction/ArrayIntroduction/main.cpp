//
//  main.cpp
//  ArrayIntroduction
//
//  Created by darst king on 6/2/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    int G[5];
    int B[5] = {5,3,4,2,1,};
    int C[10]= {2,4,6};
    int D[5] ={10};
    int E[]={1,2,3,4,5,6,7};
    
    //Addresses
    int A[5];
    int i;
    
    for (i=0;i<5;i++){
        cout<<&A[i]<<endl;
        
    }
    
    
    
    return 0;
}
