#include "Types.hpp"
void fill(vector &v, number value) { for (auto &it : v)	it = value; }
void fill(matrix &m, number value) { for (auto &it : m)	it = value; }
void get(vector &v, std::istream &s) { for (auto &it : v) s >> it; }
void get(matrix &m, std::istream &s) { for (auto &it : m) s >> it; }
void resize(vector &v, size_t n) { v.resize(n); }
void resize(matrix &m, size_t n) { m.resize(n); }
void write_file(matrix const& m, std::ostream &s) {
	s << "Output of a matrix (" << m.size() << "x" << m.size() << "):\n";
	int i = 0;
	for (auto it : m) {
		s << it << ' ';
		if (i++ % m.size() == 0) s << '\n';
	}
}
void write_file(vector const& v, std::ostream &s) {
	s << "Output of a vector:\n";
		for (auto it : v)
			s << it << ' ';
		s << '\n';
}
number dot_product(vector const& v1, int i1, vector const& v2, int i2, int size) {
	number res = 0;
	size += i1;
	while (i1 < size) {
		res += v1[i1++] * v2[i2++];
	} return res;
}
number maximum(vector const& v, int i, int size) {
	number res = std::numeric_limits<number>::min();
	size += i;
	while (i < size)
		if (v[i++] > res) res = v[i - 1];
	return res;
}