#pragma once
#include <list>

template <typename T>
class ContainerList
{
private:
	std::list<T> itsListItems;
	typename std::list<T>::iterator itsIterator;

public:
	ContainerList();
	ContainerList(T & first_item);
	~ContainerList();

	ContainerList(const ContainerList<T> & that);
	ContainerList<T> & operator=(const ContainerList<T> & that);

	bool is_there_some_more(void);
	T & get_next(void);

	void add_in_list_items(const T & item);
};

template<class T>
inline ContainerList<T>::ContainerList()
	:itsIterator(itsListItems.begin())
{
}

template<typename T>
inline ContainerList<T>::ContainerList(T & first_item)
	:itsListItems(1, first_item),
	itsIterator(itsListItems.begin())
{
}

template<class T>
inline ContainerList<T>::~ContainerList()
{
}

template<typename T>
inline ContainerList<T>::ContainerList(const ContainerList<T>& that)
	:itsListItems(that.itsListItems),
	itsIterator(itsListItems.begin())
{
}

template<typename T>
inline ContainerList<T>& ContainerList<T>::operator=(const ContainerList<T>& that)
{
	itsListItems = that.itsListItems;
	itsIterator = itsListItems.begin();
	return *this;
}

template<typename T>
inline void ContainerList<T>::add_in_list_items(const T & item)
{
	if (itsIterator == itsListItems.end()) {
		itsListItems.push_back(item);
		itsIterator = itsListItems.begin();
		return;
	}
	itsListItems.push_back(item);
}

template<class T>
inline bool ContainerList<T>::is_there_some_more(void)
{
	if (itsIterator == itsListItems.end()) {
		// перематываем назад для следующего вызова
		itsIterator = itsListItems.begin();
		// но возвращаем, что достигли конца и элементов больше нету
		return false;
	}
	else {
		return itsIterator != itsListItems.end();
	}
}

template<class T>
inline T & ContainerList<T>::get_next(void)
{
	typename std::list<T>::iterator current_elem = itsIterator;
	itsIterator++;
	return *current_elem;
}
