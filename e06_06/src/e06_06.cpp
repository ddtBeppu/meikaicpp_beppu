//============================================================================
// Name        : e06_06.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習6-6
//               「こんにちは。」と表示する関数helloを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

void hello(); // 「こんにちは。」と表示する関数

int main() {
	// 「こんにちは。」と表示する関数を呼び出す
	hello();

	// 正常終了
	return 0;
}

void hello() {
	// テキストの出力
	cout << "こんにちは。" << endl;
}
