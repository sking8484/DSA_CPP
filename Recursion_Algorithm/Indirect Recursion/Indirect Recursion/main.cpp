//
//  main.cpp
//  Indirect Recursion
//
//  Created by darst king on 5/30/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;
//func a

void funcb(int n);

void funca(int n){
    if (n>0){
        cout<<n<<endl;
        funcb(n-1);
    }
}

void funcb(int n){
    if (n>0){
        cout<<n<<endl;
        funca(n/2);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    funca(20);
    return 0;
}
