//============================================================================
// Name        : e03_25.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習3-25
// List3-3（p.87）の数当てゲームのプレーヤが値を入力できる回数に制限を設けたプログラムを作成せよ。
// 制限回数内に当てられなかった場合は、正解を表示してゲームを終了すること。

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int i_input = 0; // 入力した整数値を格納する変数

	int i_count = 0; // 現在の処理回数を格納する変数
	int i_limit = 0; // 解答可能回数を格納する変数

	srand(time(NULL)); // 乱数の種を発生させる
	// 10 ~ 99の整数値を生成
	int i_answer = rand() % 90 + 10;

	// 解答可能回数の入力を求める
	cout << "回答可能な回数：　";
	// キーボードから制限回数を入力
	cin >> i_limit;

	// 回答可能回数を伝える
	cout << i_limit << "回まで答えていいよ。";
	// ゲーム開始を知らせる
	cout << "数当てゲーム開始!!" << endl;
	// 当てる数の範囲を知らせる
	cout << "10 ~ 99の数を当ててください。" << endl;

	do { // 生成した乱数と等しい値を入力するまで実行
		cout << "いくつかな？: "; // テキストの出力
		cin >> i_input; // キーボードから整数値を入力

		if (i_answer > i_input) { // 入力値が生成値より小さい場合
			// テキストの出力
			cout << "もっと大きな数だよ。" << endl;
		} else if (i_answer < i_input) { // 入力値が生成値より大きい場合
			// テキストの出力
			cout << "もっと小さな数だよ。" << endl;
		} else { // 正解の場合
			// テキストの出力
			cout << "正解!!" << endl;
		}

		// 現在の回数に1を加算
		i_count++;
		if (i_count == i_limit) { // 回数が制限回数と等しくなった場合
			// 正解を表示し、ゲーム終了
			goto Answer;
		}
	} while(i_answer != i_input); // 生成した乱数と入力値が異なる場合、処理を続行

Answer: // 正解を表示し、ゲーム終了する処理
	// 正解を表示
	cout << "\n残念!!!" << endl;
	cout << "正解は" << i_answer << "だよ。" << endl;

	// 整数値を返す
	return 0;
}
