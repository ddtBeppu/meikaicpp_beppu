//============================================================================
// Name        : e01_05.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 問題文
// 1行に１文字ずつ名前を表示するプログラムを作成せよ。
// 姓と名の間は1行空けることとし、自分の名前を表示すること。

#include <iostream>
using namespace std;

int main() {
	cout << "別" << endl; //文字を表示したのち、改行
	cout << "府" << endl; //文字を表示したのち、改行
	cout << "\n直" << endl; //改行し、文字を表示したのち、改行
	cout << "人" << endl; //文字を表示したのち、改行

	return 0; // 整数を返す
}
