//
//  main.cpp
//  Addup
//
//  Created by Danny Cardenas on 9/29/20.
//  testing
//  practicing with github

#include <iostream>
#include <any>
using namespace std;

int addUp(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        sum = sum + i;
    }
    return sum;
  /* OR
   if (num == 1)
        return 1;
    return num + addUp(num - 1);  */
}

int main(/*int argc, const char * argv[]*/) {
   cout << addUp(4) << endl;
    return 0;
}
