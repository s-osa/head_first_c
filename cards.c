/*
 * カードの値を評価するプログラム
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  int count = 0;

  do {
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
      case 'X':
        continue;
      default:
        val = atoi(card_name);
        if (val < 1 || val > 10) {
          puts("入力エラーです");
          continue;
        }
    }

    if (val >= 3 && val <= 6)
      count++;
    else if (val == 10)
      count--;

    printf("現在のカウント：%i\n", count);
  } while (card_name[0] != 'X');

  return 0;
}

