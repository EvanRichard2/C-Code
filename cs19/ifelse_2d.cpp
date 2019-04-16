//ifelse_2d.cpp
//complile g++ ifelse_2d.cpp

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
    int r,c;
    char thechar;
    char a = '`';//1
    char b = '.';//2
    char d = '-';//3
    char e = ':';//4
    char f = '/';//5
    char g = '+';//6
    char h = 's';//7
    char i = 'y';//8
    char j = 'h';//9
    char k = 'o';//10
    int val = 0;
    int m[8][8] = {
      {                       1,1,1                     1,2,3,3,4,5,5,5,5,5,5,5,4,4,3,2,1,2,4,6,7,7,8,9,8,8,7,10,10,6,5,5                      },

    };

      for (r = 0; r < 8; r++){
      for (c = 0; c < 8; c++){
        val = m[r][c];
        if (val == 1){
          thechar = a;
        }
          else if (val == 2){
            thechar = b;
          }
          else if (val == 3){
            thechar = d;
          }
          else if (val == 4){
            thechar = e;
          }
          else if (val == 5){
            thechar = f;
          }
          else if (val == 6){
              thechar = g;
          }
          else if (val == 7){
                thechar = h;
          }
          else if (val == 8){
            thechar = i;
          }
          else if (val == 9){
            thechar = j;
          }
          else if (val == 10){
            thechar = k;
          }
          else{
            thechar = z;
          }
          cout<<thechar;
      }
      cout<<"\n";
    }
  return 0;
}
