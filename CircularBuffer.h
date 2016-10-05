#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H


#include "vector.h"
#include <iostream>
using pep::vector;
using std::cout;
using std::endl;


/** TODO: complete the definition of the class CircularBuffer here
 *
 * Its constructor should take the size of the buffer as an argument
 *
 * It needs to have the functions:
 * - count() which returns how many things are in the buffer
 * - full() which returns true iff the buffer is full
 * - add() which takes an element and adds it to the buffer (you can assume the buffer is not full)
 * - remove() which removes the next element from the buffer (you can assume the buffer is not empty)
 */
class CircularBuffer {
protected:
	vector<char> buffer;

public: 
	CircularBuffer(int size) {
		buffer = vector<char>(size);
		cout << buffer.size() << endl;
	}

	int count() const {
		int count = 0;
		for(int i = 0; i < buffer.size(); i++) {
			if (buffer[i] != (char) 0) {
				++count;
			}
		}
		return count;
	}

	bool full() const {
		if (count() == buffer.size()) {
			return true;
		}
		return false;
	}

	void add(const char & c) {

	}

	char remove() {
		
	}
    
};


// don't write any code below this line

#endif
