/**
 * Author: Stjepan Glavina
 * Source: https://github.com/stjepang/snippets/blob/master/min_rotation.cpp
 * Description: 找到字符串经过旋转可以得到的字典序最小的字符串。
 * Time: O(N)
 * Status: Fuzz-tested
 * Usage:
 *  rotate(v.begin(), v.begin()+min_rotation(v), v.end());
 */
#pragma once

int min_rotation(string s) {
	int a=0, N=sz(s); s += s;
	rep(b,0,N) rep(i,0,N) {
		if (a+i == b || s[a+i] < s[b+i]) {b += max(0, i-1); break;}
		if (s[a+i] > s[b+i]) { a = b; break; }
	}
	return a;
}
