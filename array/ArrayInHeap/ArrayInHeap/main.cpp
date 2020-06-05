//
//  main.cpp
//  ArrayInHeap
//
//  Created by darst king on 6/2/20.
//  Copyright © 2020 darst king. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    //Initialize array in the heap
    
    int *p;
    
    p=new int[5];
    
    p[0]=3;
    p[1]=5;
    
    std::cout<<p[0]<<std::endl;
    
    
    //Release the memory
    
    delete []p;
    
    return 0;
}
