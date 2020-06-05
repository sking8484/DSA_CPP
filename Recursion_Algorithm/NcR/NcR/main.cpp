//
//  main.cpp
//  NcR
//
//  Created by darst king on 6/1/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;

int c(int n,int r){
    if (r==0 || n==r){
        return 1;
    } else {
        return c(n-1,r-1)+c(n-1,r);
    }
}


int fact(int n){
    if (n==0){
        return 1;
    } else {
        return fact(n-1)*n;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    int x;
//    x = c(5,3);
//    cout<<x<<endl;
    int x;
    x = fact(3);
    cout<<x<<endl;
}
