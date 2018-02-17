//============================================================================
// Name        : e01_03.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//問題文
//文の終端を示すセミコロンが欠如しているとどうなるか。プログラムをコンパイルして検証せよ。

#include <iostream>
using namespace std;

int main() {
	std::cout << "初めてのC++プログラム。¥n" // セミコロンを削除
	std::cout << "画面に出力しています。¥n" // セミコロンを削除
	return 0;
}

// -> 結果、コンパイルエラーとなる。
