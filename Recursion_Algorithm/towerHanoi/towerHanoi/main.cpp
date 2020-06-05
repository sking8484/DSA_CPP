//
//  main.cpp
//  towerHanoi
//
//  Created by darst king on 6/1/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>
using namespace std;


void TOH(int n,int A, int B, int C){
    if (n>0){
        TOH(n-1,A,C,B);
        cout<<"From "<<A<<" to "<<C<<", Using "<<B<<endl;
        TOH(n-1,B,A,C);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    TOH(3,1,2,3);
    return 0;
}
