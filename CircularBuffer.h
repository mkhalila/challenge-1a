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
	int front;
	int rear;

public: 
	CircularBuffer(int size) :front(-1), rear(-1) {
		buffer = vector<char>(size);
	}

	int count() const {
		int count = 0;
		for(int i = 0; i < buffer.size(); i++) {
			if (buffer[i] != (char) 0) { ++count; }
		}
		return count;
	}

	bool full() const {
		if (count() == buffer.size()) { return true; }
		return false;
	}

	void add(const char & c) {
		if (!full()) {
			if (rear == buffer.size() - 1) { rear = 0; }
			else { ++rear; }
			buffer[rear] = c;
			if (front == -1) { front = 0; }
		}
	}

	char remove() {
		char removed = (char) 0;
		if (count() > 0) {
			removed = buffer[front];
			buffer[front] = (char) 0;
			if (front == buffer.size()) { front = 0; }
			if (front == rear) { front = rear = -1; }	
			++front;
			return removed;
		}
	}
};


// don't write any code below this line

#endif
