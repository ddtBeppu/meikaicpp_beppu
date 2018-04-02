//============================================================================
// Name        : e08_01.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習8-1
//               List8-4の配列sの宣言を以下のように書き換えたプログラムを作成せよ。
//                   char s[] = "ABC\0DEF";
//               実行結果に対する考察を行うこと。
//============================================================================

/*実行結果*/
// -> 配列cStringに文字列"ABC"が格納されています。

/*考察*/
// -> ABC\0DEFのように、ABCの後にナル文字が存在するため、そこが文字列の末尾であると処理されたと考えられる。

#include <iostream>
using namespace std;

int main() {
	//char cString[6] = "ABC";
	char cString[] = "ABC\0DEF"; // 文字列を定義、検証する

	//文字列を出力
	cout << "配列cStringに文字列\"" << cString << "\"が格納されています。" << endl;

	// 正常終了
	return 0;
}
