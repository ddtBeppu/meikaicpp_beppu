//============================================================================
// Name        : e01_01.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//演習1-1
/*ヘッダ<iostream>をインクルードする指令が欠如しているとどうなるだろうか。
 プログラムをコンパイルして検証せよ。*/


#include <iostream>
using namespace std; // 名前空間の宣言

int main() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	return 0; // 整数を返す。
}
	// 解答
	// <iostream>が欠如したプログラムでは、名前空間std中で宣言されている入出力関数が使用できなくなり、
	// コンパイルエラーとなる。
