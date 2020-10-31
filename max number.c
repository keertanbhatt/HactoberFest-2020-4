/*Fit Square
We provided you with a rectangular board of MxN dimension. Also, he provided an unlimited number of small blocks of 2x1size. You are allowed to rotate the block. You are asked to place as many blocks as possible on the board to meet the following conditions:
1. Each block completely covers two squares.
2. No two blocks overlap.
3. Each block lies entirely inside the board. It is allowed to touch the edges of the board.
Find the maximum number of blocks, which can be placed under these restrictions.

Example
Input
1 
2 5
Output
5*/

#include <stdio.h>

  int main()
  {
    int t;
    scanf("%d",&t);
    while(t)
    {
      int M,N,area;
      scanf("%d %d",&M,&N);
      area=M*N;
     int area_block=2;
     int max_block=area/area_block;
     printf("%d\n",max_block);

      t--;
    }

    return 0;
  }
