//
//  main.cpp
//  HIHOGateWay
//
//  Created by 孟文斌 on 15/4/21.
//  Copyright (c) 2015年 孟文斌. All rights reserved.
//

#include <iostream>

using namespace std;


int conuntGateWay(int n,int k){
    if(n<=k) return 0;
    int surp = n-k-1;
    
    int ans = 1;
    return ans;
}

int main(int argc, const char * argv[]) {
    cout<<conuntGateWay(3,3)<<endl;
    return 0;
}
