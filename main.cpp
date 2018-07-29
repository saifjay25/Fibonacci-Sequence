//
//  main.cpp
//  fibo
//
//  Created by Saif Jame on 7/26/18.
//  Copyright © 2018 Saif Jame. All rights reserved.
//
#include <iostream>
#include "sequence.hpp"
#include <vector>
using namespace std;
int main() {
    int value=0;
    vector<int> array;
    cout<<"Enter fibonacci number"<<endl;
    fibonacci object;
    cin>>value;
    while(value<0){
        cout<<"Enter value greater than 0"<<endl;
        cin>>value;
    }
    if(value==0){
        cout<<"0"<<endl;
        return 0;
    }
    array=object.fibo(value,array);
    return 0;
}
