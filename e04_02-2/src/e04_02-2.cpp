//============================================================================
// Name        : e04_02-2.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習4-2
//               以下のプログラムを作成せよ。
// 				 ・unsigned型の最小値から最大値までの全整数値を８進数・10進数・16進数で表示。
//============================================================================

#include <cctype>
#include <climits>
#include <iostream>
using namespace std;

int main() {
	const int i_min = 0; // unsigned int型の最小値 = 0
	const unsigned i_max = UINT_MAX; // unsinged int型の最大値
	unsigned i_digit = 0; // unsigned int型の整数値

	for (i_digit = i_min; i_digit < i_max; i_digit++) { // int型の最小値から最大値まで繰り返し
		// 8進数で値を表示
		cout << "8進数 : " << oct << i_digit << endl;
		// 10進数で値を表示
		cout << "10進数 : " << dec << i_digit << endl;
		// 16進数で値を表示
		cout << "16進数 : " << hex << i_digit << endl;

		// 改行
		cout << "\n";
	}

	// 整数値を返す
	return 0;
}
