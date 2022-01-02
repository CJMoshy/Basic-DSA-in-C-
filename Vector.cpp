//created by CJ Moshy on 10/10/2021
#pragma once
template<typename T>
class Vector {
public:

	Vector() { //constructor
		resize(2);
	}

	void push_back(const T& val) {
		if (m_size >= capacity)
			resize(capacity + capacity / 2);
		data[m_size] = val;
		m_size++;
	}
	
	T& operator[](int i)  { return data[i]; }
	const T& operator[](int i) const { return data[i]; }

	size_t Size() const { return m_size; }
private:

	void resize(size_t newSize) { 
		//allocate a new block of memory
		// copy
		//delete old block
		
		T* newMem = new T[newSize]; //create a block of some memory

		size_t _s = m_size;
		if (newSize < _s) {
			m_size = newSize;
		}
		for (size_t i = 0; i < m_size; i++) {
			newMem[i] = data[i];		//copy memory from this-> to the new memory
		}

		delete data; //delete the pointer to the old memory
		data = newMem; //set it equal to the new memory[0]
		capacity = newSize; //change the capacity variable
	}


private:
	T* data = nullptr;

	size_t m_size = 0;
	size_t capacity = 0;
};
