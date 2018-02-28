//============================================================================
// Name        : e03_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-2
// 2桁の整数値（10 ~ 99）を当てさせる<数当てゲーム>を作成せよ

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(time(NULL)); // 乱数の種を発生させる

	int input; // 入力した整数値を格納する変数

	// 10 ~ 99の整数値を生成
	int num = rand() % 90 + 10;

	// ゲーム開始を知らせる
	cout << "数当てゲーム開始!!" << endl;
	// 当てる数の範囲を知らせる
	cout << "10 ~ 99の数を当ててください。" << endl;

	do { // 生成した乱数と等しい値を入力するまで実行
		cout << "いくつかな？: "; // テキストの出力
		cin >> input; // キーボードから整数値を入力

		if (num > input) { // 入力値が生成値より小さい場合
			// テキストの出力
			cout << "もっと大きな数だよ。" << endl;
		} else if (num < input) { // 入力値が生成値より大きい場合
			// テキストの出力
			cout << "もっと小さな数だよ。" << endl;
		} else { // 正解の場合
			// テキストの出力
			cout << "正解!!" << endl;
		}
	} while(num != input); // 生成した乱数と入力値が異なる場合、処理を続行

	return 0; // 整数値を返す
}
