//============================================================================
// Name        : e02_15.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-15
// おみくじプログラムを作成せよ。
// 「大吉」「中吉」「小吉」「吉」「末吉」「凶」「大凶」のいずれかを表示すること

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int luck; // 運勢を表す整数を格納する変数

	srand(time(NULL)); // 乱数の種を生成
	luck = rand() % 10; // 0から9までの乱数を生成

	switch(luck){ // switch文
	case 0: cout << "大吉" << endl; break; // 0の場合、大吉
	case 1: cout << "中吉" << endl; break; // 1の場合、中吉
	case 2: cout << "小吉" << endl; break; // 2の場合、小吉
	case 3: cout << "吉" << endl; break; // 3の場合、吉
	case 4: cout << "末吉" << endl; break; // 4の場合、末吉
	case 5: cout << "凶" << endl; break; // 5の場合、凶
	case 6: cout << "大凶" << endl; break; // 大凶
	default: cout << "吉" << endl; break; // それ以外の場合、吉
	}

	return 0; // 整数を返す
}
