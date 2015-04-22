//
//  main.cpp
//  DominoIII
//
//  Created by 孟文斌 on 15/4/21.
//  Copyright (c) 2015年 孟文斌. All rights reserved.
//

#include <iostream>

using namespace std;

const int MOD = 12357;

int dominoIII(int n){//an = 3an-1 + 2(a0+a1+a2+···+an-2) => an-(an-1) = 2(a0+a1+a2+···+an-1)=>an = 4(an-1) - (an-2)
    if(n<=0 || n&1) return 0;
    n /=2;
    int * val = new int[n+1];
    val[0] = 1;
    val[1] = 3;
    for(int i=2;i<=n;i++){
        val[i] = 4*val[i-1] + MOD - val[i-2];
        val[i] %= MOD;
    }
    return val[n];
}

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    cout<<dominoIII(n)<<endl;
    return 0;
}
