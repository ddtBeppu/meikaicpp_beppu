//============================================================================
// Name        : e07_01.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-1
//               List7-2(p.244)に&ptrの表示を追加したプログラムを作成せよ。
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int iNum = 135; // 整数を初期化

	// 整数値をそのまま出力
	cout << "iNum  : " << iNum << endl;
	// 整数値が格納されているアドレスを表示
	cout << "&iNum : " << &iNum << "番地" << endl;

	// iNumの番地&iNumのオブジェクトが*ptrである。
	int* ptr = &iNum;

	// iNumのアドレスを表示
	cout << "ptr : " << ptr << "番地" << endl;
	// アドレス&iNumに格納されているオブジェクト(値)を表示
	cout << "*ptr : " << *ptr << endl;

	// 追加した部分。int**型となる。ポインタへのポインタ。
	cout << "&ptr : " << &ptr << endl;

	// 正常終了
	return 0;
}
