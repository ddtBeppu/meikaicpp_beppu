/*
 * Boolean.h
 *
 *  Created on: May 2, 2018
 *      Author: naotobeppu
 *
 *  演習12-2
 *     クラスBooleanに対して、vがFalseであればbool型のtrueを、Trueであればbool型のfalseを
 *     返却する演算子関数!を追加せよ。
 */

#ifndef BOOLEAN_H_
#define BOOLEAN_H_


#include <iostream>

class Boolean {
public:
	// 条件を表す値を列挙
	enum boolean {
		False, // false
		True  // true
	};

private:
	boolean bValue; // 列挙型の変数で、False/Trueの2値を取る

public:
	// デフォルトコンストラクタを定義
	Boolean() : bValue(False) {}

	// 入力値が0の時、Falseを返し、0以外の場合にTrueを返す
	Boolean(int val) : bValue(val == 0 ? False : True) {}

	// 変換演算子を定義
	operator int() const {
		// 変換した値を返却
		return bValue;
	}

	// const char*型への変換を行う関数
	operator const char*() const {
		// 整数値に応じてconst char*型である"Falseあるいは"True"を返却する
		return bValue == False ? "False" : "True";
	}
};

// 挿入子の実装
inline std::ostream& operator<<(std::ostream& oStream, Boolean& objBool) {
	// 挿入子を使用した際、値をconst char*型に変換して返却
	return oStream << static_cast<const char*>(objBool);
}


#endif /* BOOLEAN_H_ */
