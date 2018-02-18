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
