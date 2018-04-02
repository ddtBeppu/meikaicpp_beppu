//============================================================================
// Name        : e07_17.cpp
// Author      : Naoto Beppu
// Version     :
// Copyright   : Your copyright notice
// Description : 演習7-17
//               ポインタpが指すオブジェクトの先頭nバイトにvを代入する関数mem_setを作成せよ。
//                   void mem_set(void* p, int n, unsigned char v);
//============================================================================

#include <iostream>
using namespace std;

// ポインタvPが指すオブジェクトの先頭iRangeバイトにucValを代入する関数
void mem_set(void* vP, int iRange, unsigned char ucVal);

int main() {
	const int iArrSize = 8; // 配列の要素数を表す

	// この配列の中のいくつかを違う文字リテラルで置き換える
	char cArray[iArrSize] = {'*', '*', '*', '*', '*', '*', '*', '*'};

	// 配列の先頭から3文字を'?'で置き換え
	mem_set(&cArray, 3, '?');

	// 置き換えた後の結果を確認する
	for (int i = 0; i < iArrSize; i++) {
		// 配列要素ごとに値を確認
		cout << "iArray[" << i << "] = " << cArray[i] << endl;
	}

	// 正常終了
	return 0;
}

// ポインタvPが指すオブジェクトの先頭iRangeバイトにucValを代入する関数
void mem_set(void* vP, int iRange, unsigned char ucVal) {
	// 指定した数だけ、先頭から文字を代入する
	for(int i = 0; i < iRange; i++) {
		// void*型をキャストし、unsigned char型のオブジェクトの代入を可能にする
		((char*)vP)[i] = ucVal;
	}
}

