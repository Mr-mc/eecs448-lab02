/**
*	@author Michael Collins
*	@date Feb 6
*	@file LinkedList.hpp
*	@brief Implementation file for templated LinkedList class
*/

/*

    In your local repository, create working method definitions for all Linked List methods that currently have dummy returns (look for TODO notes in the LinkedList.hpp)
    Create series of commits that represent logical changes to the code until you have a working version of the LinkedList class
    Use the provided test code to verify your changes work
    After you have it working locally, push your master branch to your fork
*/
template <typename T>
LinkedList<T>::LinkedList() : m_front(nullptr), m_size(0)
{

}

template <typename T>
LinkedList<T>::~LinkedList()
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
	return(m_size);
}

template <typename T>
bool LinkedList<T>::search(T value) const
{
	Node<T>* temp = m_front;
	bool isFound = false;

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

	return(vec);

}

template <typename T>
void LinkedList<T>::addBack(T value)
{
	Node<T>* temp = nullptr;

	if(isEmpty())
	{
		m_front = new Node<T>(value);
	}
	else
	{
		temp = m_front;
		while(temp->getNext() != nullptr)
		{
			temp = temp->getNext();
		}

		temp->setNext( new Node<T>(value) );
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


	/** TODO
		Fix this method
	*/
secondintoLast = m_front;
	if(!isEmpty())
	{


		//for(int i = 1; i <=size(); i++)
		while(secondintoLast->getNext() != nullptr)
		{
			//if(i == size() -1)
					secondintoLast = secondintoLast->getNext();
		//	if( != size())
			//	secondintoLast = secondintoLast->getNext();
		}

		if(size() == 1)
		{
			lastNode = m_front;
			delete lastNode;
			lastNode = nullptr;
			secondintoLast = nullptr;
			m_front = nullptr;
			m_size--;
		}
		else if(size () == 2)
		{
				delete secondintoLast;
				m_front->setNext(nullptr);
				secondintoLast = nullptr;
				m_size--;
		}
		else
		{
		lastNode = secondintoLast->getNext();
//		lastNode = lastNode->getNext();
		delete lastNode;
		secondintoLast->setNext(nullptr);

		lastNode = nullptr;
		m_size--;

		}
		isRemoved = true;
	}
	else if(size() < 1)
		{m_front = nullptr;
		lastNode = nullptr;
		secondintoLast = nullptr;
	}
	return(isRemoved);
}

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
