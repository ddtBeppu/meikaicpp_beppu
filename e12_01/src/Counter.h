 /*
 * Counter.h
 *
 *  Created on: May 1, 2018
 *      Author: naotobeppu
 *
 *  演習12-1
 *  前置演算子と後置演算子は行うことがほぼ同じため、似たようなコードが各演算子関数に散らばっている
 *               （例えば、増分演算子中のif文は前置版と後置版で同一であるし、減分演算子中のif文も前置版と後置版で
 *                同一である。）
 *               　前置演算子関数から後置演算子関数を呼び出すか、もしくは後置演算子関数から前置演算子関数を呼び出す
 *               かのいずれかに変更せよ。なお、どちらの実現が好ましいかも検討すること。
 */

#ifndef COUNTER_H_
#define COUNTER_H_

#include <climits>

class Counter {
	unsigned int uiCount; // カウントアップ / カウントダウンの対象となるメンバ変数を定義
public:
	// コンストラクタを定義
	Counter() : uiCount(0) {}

	// unsigned型に変換する変換関数の定義
	operator unsigned() const {
		// 変換して値を返却
		return uiCount;
	}
	// 演算子関数を定義
	bool operator!() const {
		// 値を0にする
		return uiCount == 0;
	}
	// 前置演算子関数。インクリメント後に値を更新
	Counter& operator++() {
		// 取り得る最大値まで繰り返し
		if (uiCount < UINT_MAX) {
			// カウントアップ
			uiCount++;
		}
		// 自分自身への参照を返す
		return *this;
	}
	// 後置演算子関数。値を参照したのち、インクリメント
	Counter operator++(int) {
		// 自分自身への参照を取得
		Counter counter = *this;
		// 前置演算子関数の呼び出しにより、値をカウントアップ
		operator++();
		// 更新した値を返す
		return counter;
	}
	// 前置演算子関数。デクリメント後に値を更新
	Counter& operator--() {
		// 値が0以上なら減算
		if (uiCount > 0) {
			// デクリメント
			uiCount--;
		}
		// 自分自身への参照を返す
		return *this;
	}
	// 後置演算子関数。値を参照したのち、デクリメント
	Counter operator--(int) {
		// 自分自身への参照を取得
		Counter counter = *this;
		// 前置演算子関数の呼び出しにより、カウントダウン
		operator--();
		// 更新した値を返す
		return counter;
	}
};

#endif /* COUNTER_H_ */
