/*
 * カードの値を評価するプログラム
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  puts("カード名を入力してください：");
  scanf("%2s", card_name);
  int val = 0;

  switch(card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    defaut:
      val = atoi(card_name);
  }

  if ((val >= 3) && (val <= 6))
    puts("カウントが増えます");
  else if (val == 10)
    puts("カウントが減ります");

  return 0;
}

