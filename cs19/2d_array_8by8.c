//complile gcc namefile.c -o namefile.o

#include <stdio.h>

int main()
{
    int r,c;
    char a = '*';
    int val = 0;
    int m[8][8] = {
      {0,1,2,3,4,5,0,0} ,
      {1,0,0,0,0,0,0,0} ,
      {2,0,0,0,0,0,0,0} ,
      {3,0,0,0,0,0,0,0} ,
      {4,0,0,0,0,0,0,0} ,
      {5,0,0,0,0,0,0,0} ,
      {0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0}
    };

      for (r = 0; r < 8; r++){
      for (c = 0; c < 8; c++){
        val = m[r][c];
        printf("%d ",val);
      }
      printf("\n");
    }
  return 0;
}
