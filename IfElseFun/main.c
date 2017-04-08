//
//  main.c
//  IfElseFun
//
//  Created by Josiah Mory on 4/7/17.
//  Copyright © 2017 kickinbahk Productions. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  int i = 20;
  int j = 25;
  int k = ( i > j ) ? 10 : 5;
  
  printf("%d\n", k);
  
  if ( 5 < j - k ) {
    printf("The first expression is true.\n");
  } else if ( j > i ) {
    printf("The second expression is true\n");
  } else {
    printf("Neither expression is true\n");
  }
  return 0;
}
