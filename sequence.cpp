//
//  sequence.cpp
//  fibo
//
//  Created by Saif Jame on 7/26/18.
//  Copyright © 2018 Saif Jame. All rights reserved.
//
#include <iostream>
#include "sequence.hpp"
#include <vector>
using namespace std;
vector<int> fibonacci:: fibo(int value, vector<int> array){
    int i=0;
    int counter=0;
    array.push_back(counter);
    int firstNum=1;
    array.push_back(firstNum);
    counter=firstNum;
    while(counter<value){
        int first= array.at(i);
        int second= array.at(++i);
        int third= first+second;
        if(third<value){
            array.push_back(third);
            counter=third;
            continue;
        }
        if(third>value){
            array.clear();
            array.push_back(0);
            array.push_back(firstNum++);
            counter=0;
            i=0;
            continue;
        }
        if(third==value){
            array.push_back(third);
            break;
        }
    }
    for(i=0; i<array.size();i++){
        cout<<array[i]<<",";
    }
    cout<<endl;
    return array;
}
