#pragma once
//templated for usability
template<typename T, int N>
class Array {
public:
	//determined at compile-time
	constexpr int Size() const { return N; }

	//overloads for access of elements
	T& operator[](size_t i) { return m_data[i]; }
	const T& operator[](size_t i) const { return m_data[i]; }
	

private:
	T m_data[N]; //so simple!
};



