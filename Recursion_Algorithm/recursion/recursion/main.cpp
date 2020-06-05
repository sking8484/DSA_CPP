//
//  main.cpp
//  recursion
//
//  Created by darst king on 5/29/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;


//Initial Recursion Algorithm

void recurse(int n){
    if (n>0){
        cout<<"Pre - Call "<<n<<endl;
        recurse(n-1);
        cout<<"Post - Call "<<n<<endl;
    }
    cout<<"terminator"<<endl;
}

// Static Variable Recursion

int staticRecursion(int n){
    static int x=0;
    if (n>0){
        x++;
        return staticRecursion(n-1) + x;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    // !!!!! Initial Recursion Algorithm !!!!! //
    
    /* int i=10;
    recurse(i);
    */
    
    // !!!!! Static Variable Recurssion !!!!! //
    
    int n = 3;
    int x;
    x = staticRecursion(n);
    cout<<x<<endl;
    
    //Return value of main function
    return 0;
}
