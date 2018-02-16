//============================================================================
// Name        : e01_02.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 問題文
// List1-1(p.4)のプログラムからusing指令を削除して、
// coutをstd::coutに変更したプログラムを作成せよ。

#include <iostream>
//using namespace std;

int main() {
	std::cout << "初めてのC++プログラム。¥n"; // テキストの出力
	std::cout << "画面に出力しています。¥n"; // テキストの出力

	return 0;
}
