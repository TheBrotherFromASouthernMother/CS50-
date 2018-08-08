//
//  collatz.cpp
//  Intro-to-C++
//
//  Created by Christian Lowe on 8/8/18.
//  Copyright © 2018 Christian Lowe. All rights reserved.
//

#include "collatz.hpp"
#include <iostream>
using namespace std;

int collatz(int n) {
    cout <<"Collatz No. " <<n <<"\n";
   if (n == 1) {
       return n;
   } else if (n % 2 == 0) {
       collatz(n / 2);
   } else {
       collatz((3*n) + 1);
   }
    return 1;
}
