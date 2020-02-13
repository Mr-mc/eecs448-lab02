/**
<<<<<<< HEAD
*	@author Michael Collins
*	@date Feb 6
=======
*	@author 
*	@date 
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
*	@file LinkedList.hpp
*	@brief Implementation file for templated LinkedList class
*/

<<<<<<< HEAD
/*

    In your local repository, create working method definitions for all Linked List methods that currently have dummy returns (look for TODO notes in the LinkedList.hpp)
    Create series of commits that represent logical changes to the code until you have a working version of the LinkedList class
    Use the provided test code to verify your changes work
    After you have it working locally, push your master branch to your fork
*/
=======
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
template <typename T>
LinkedList<T>::LinkedList() : m_front(nullptr), m_size(0)
{

}

template <typename T>
<<<<<<< HEAD
LinkedList<T>::~LinkedList()
=======
LinkedList<T>::~LinkedList() 
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
{
	while(!isEmpty())
	{
		removeFront();
	}
}

template <typename T>
bool LinkedList<T>::isEmpty() const
{
	return(m_size == 0);
}

template <typename T>
int LinkedList<T>::size() const
{
<<<<<<< HEAD
	return(m_size);
=======
	/** TODO 
		Fix this method
	*/
	return(0);
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
}

template <typename T>
bool LinkedList<T>::search(T value) const
{
	Node<T>* temp = m_front;
	bool isFound = false;

<<<<<<< HEAD
	if(!isEmpty() && temp != nullptr)
	{
		if(value == temp->getValue())
		{
			return (isFound = true);
		}
		for(int i = 1; i <= size(); i++)
		{
			if(temp->getNext() != nullptr)
				temp = temp->getNext();
			if(value == temp->getValue())
				return true;
		}
		return isFound;
	}
=======
	/** TODO 
		Fix this method
	*/

>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
	return(isFound);
}

template <typename T>
std::vector<T> LinkedList<T>::toVector() const
{
	std::vector<T> vec;
	Node<T>* temp = m_front;

	while( temp != nullptr )
	{
		vec.push_back(temp->getValue());
		temp = temp->getNext();
	}

<<<<<<< HEAD
	return(vec);

=======
	return(vec);	
	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
}

template <typename T>
void LinkedList<T>::addBack(T value)
{
	Node<T>* temp = nullptr;

	if(isEmpty())
	{
<<<<<<< HEAD
		m_front = new Node<T>(value);
=======
		m_front = new Node<T>(value);	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
	}
	else
	{
		temp = m_front;
		while(temp->getNext() != nullptr)
		{
			temp = temp->getNext();
		}

<<<<<<< HEAD
		temp->setNext( new Node<T>(value) );
=======
		temp->setNext( new Node<T>(value) );		
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546
	}

	m_size++;
}

template <typename T>
void LinkedList<T>::addFront(T value)
{
	Node<T>* temp = m_front;
	m_front = new Node<T>(value);
	m_front->setNext( temp );
	m_size++;
}

template <typename T>
bool LinkedList<T>::removeBack()
{
	Node<T>* lastNode = nullptr;
	Node<T>* secondintoLast = nullptr;
	bool isRemoved = false;

<<<<<<< HEAD
	if(size() < 1 || m_front == nullptr)
		return (isRemoved = false);
	else
	{
		lastNode = m_front;
		if(size() == 1)
		{
				m_size--;
			delete m_front;
			m_front = nullptr;
			isRemoved = true;
		}
		else if(size()== 2){
			lastNode = lastNode->getNext();
			m_size--;
			delete lastNode;
			isRemoved = true;
			lastNode = nullptr;
		}
		else if(size() > 2 && lastNode != nullptr)
		{
			while(lastNode->getNext() != nullptr)
			{
				secondintoLast = lastNode;
				lastNode = lastNode->getNext();
			}
			secondintoLast->setNext(nullptr);
			delete lastNode;
			m_size--;
			isRemoved = true;
		} // 1->2->3-> nullptr
	}
	return(isRemoved);
}
=======
	/** TODO 
		Fix this method
	*/

	return(isRemoved);
}	
>>>>>>> b7a1158142df84b32e499f039f7cca0675cb2546

template <typename T>
bool LinkedList<T>::removeFront()
{
	Node<T>* temp = nullptr;
	bool isRemoved = false;

	if(!isEmpty())
	{
		temp = m_front;
		m_front = temp->getNext();
		delete temp;
		m_size--;
		isRemoved = true;
	}

	return(isRemoved);
}
