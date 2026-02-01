#include <stdio.h>
#define message_for(a, b) \
    printf(#a " and " #b ": We love you!\n")

int main(){
    int i = 10;

while (i > 5) {
  printf("%d\n", i);
  i--;
}
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  printf("%d\n", i);
}

int myNumbers[] = {25, 50, 75, 100};
int j;

for (j = 0; j < 4; j++) {
  printf("%d\n", myNumbers[j]);
}

  printf("File :%s\n", __FILE__);
  printf("Date :%s\n", __DATE__);
  printf("Time :%s\n", __TIME__);
  printf("Line :%d\n", __LINE__);
  printf("ANSI :%d\n", __STDC__);

message_for(amit,ragg);

}
