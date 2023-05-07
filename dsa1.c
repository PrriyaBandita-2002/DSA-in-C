//declaring of 2d array    0 1 2
                      // 0 1 4 2
//                       1 3,6,8
#include<stdio.h>

    int main()
{
   int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

printf("%d %d %d  \n" ,matrix[0][0], matrix[0][1], matrix[0][2]); 
printf("%d %d %d" ,  matrix[1][0] ,matrix[1][1], matrix[1][2]);  
}
