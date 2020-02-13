/**

*	@author Michael Collins
*	@date Feb 6


**/

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
