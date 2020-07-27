/*
윤성우의 C열혈 교재 예제 코드 수정 약간 있음
주석만 첨가
*/

#include <stdio.h>
#define SIZE 50

int main(){

  char str[SIZE]="I love C programming";

  printf("\n");
  printf("string: %s\n",str);

  str[8] = '\0'; //8번째 배열값은 NULL >> 예상: 7번째까지만 출력됨
  printf("string: %s\n",str);

  str[6] = NULL;
  printf("string: %s\n",str);

  str[1] = '\0';
  printf("string: %s\n",str);

  
return 0;
}
