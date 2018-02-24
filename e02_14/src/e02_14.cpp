//============================================================================
// Name        : e02_14.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 演習2-14
// 0, 1, 2のいずれかの値の乱数を生成し、0であれば「グー」、1であれば「チョキ」、
// 2であれば「パー」と表示するプログラムを作成せよ。

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int hand; // 手の形を表す整数を格納する変数
	int div = 3; // 乱数を3で割り、0 ~ 2の乱数を発生させる

	srand(time(NULL)); // 乱数の種を生成
	hand = rand() % div; // 0,1,2いずれかの乱数を生成

	switch(hand){ // switch文
	case 0: cout << "グー\n" << endl; break; // 0の場合、グーと出力
	case 1: cout << "チョキ\n" << endl; break; // 1の場合、チョキと出力
	case 2: cout << "パー\n" << endl; break; // 2の場合、パーと出力
	}

	return 0; // 整数値を返す
}
