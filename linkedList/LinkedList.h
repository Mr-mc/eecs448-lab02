/**
*	@file LinkedList.h
<<<<<<< HEAD
*	@author Michael Collins
*	@date Feb 6
=======
*	@author 
*	@date 
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
*	@brief A header file for templated LinkedList class
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <vector>
#include "Node.h"

template <typename T>
class LinkedList
{
	public:
	/** @pre None.
	*   @post An empty list is created.
	*/
	LinkedList();
<<<<<<< HEAD

	/** @pre None.
	*   @post Deletes all nodes in the list.
	*/
	~LinkedList();
=======
	
	/** @pre None.
	*   @post Deletes all nodes in the list.
	*/
	~LinkedList();	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546

	/** @pre None.
	*   @post None.
	*   @return intrue if the list is empty, false otherwise.
<<<<<<< HEAD
	*/
=======
	*/	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
	bool isEmpty() const;

	/** @pre None.
	*   @post None.
	*   @return inthe number of elements in the list.
<<<<<<< HEAD
	*/
=======
	*/	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
	int size() const;

	/** @pre the value is a valid T.
	*   @post none.
	*   @return intrue is the value is in the list, false otherwise.
<<<<<<< HEAD
	*/
=======
	*/	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
	bool search(T value) const;

	/** @pre None
	*   @post None
	*   @return A standard vector with the contents of the list
<<<<<<< HEAD
	*/
=======
	*/	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
	std::vector<T> toVector() const;

	/** @pre the value is a valid T.
	*   @post One new element added to the end of the list.
	*   @return none.
<<<<<<< HEAD
	*/
=======
	*/	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
	void addBack(T value);

	/** @pre the value is a valid T.
	*   @post One new element added to the front of the list.
	*   @return none.
<<<<<<< HEAD
	*/
=======
	*/	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
	void addFront(T value);

	/** @pre None
	*   @post One element is removed from the back of the list.
	*   @return intrue if the back element was removed, false if the list is empty.
<<<<<<< HEAD
	*/
	bool removeBack();
=======
	*/	
	bool removeBack();	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return intrue if the front element was removed, false if the list is empty.
<<<<<<< HEAD
	*/
=======
	*/	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
	bool removeFront();

	private:
	Node<T>* m_front;
	T m_size;
};

#include "LinkedList.hpp"

#endif
