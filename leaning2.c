/**
 * @file leaning2.c
 * @author Kosuke
 * 
 * @brief 「ターミナルから2つの整数を入力し、2つの整数の和と積の計算結果をターミナルに表示させる」
 * 期待する結果の例（ターミナル上の表示内容）
 * 1～10までの整数を2つ入力してください。
 * 1つ目の整数を入力してください＞1　（ターミナルで1を入力）
 * 2つ目の整数を入力してください＞2　（ターミナルで2を入力）
 * 和は「3」です。
 * 積は「2」です。
 * 
 * @version 0.1
 * @date 2020-07-23
 * @copyright Copyright (c) 2020
 */

#include <stdio.h>

int main(void)
{
    int n[2] = {0, 0};
    printf("1～10までの整数を2つ入力してください。");
    printf("1つ目の整数を入力してください＞");
    scanf("%d", &n[0]);
    printf("2つ目の整数を入力してください＞");
    scanf("%d", &n[1]);
    printf("%d\n", n[0] + n[1]);
    printf("%d\n", n[0] * n[1]);
    return 0;
}

// Add Comment By Yuta.