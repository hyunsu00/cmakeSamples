// Animal.cpp
//
#include "Animal.h"

namespace semtl {

	Animal::Animal(const std::wstring& name, int age)
	: m_Name(name)
	, m_Age(age)
	{
	}

	const std::wstring& Animal::getName() const
	{
		return m_Name;
	}

	int Animal::getAge() const
	{
		return m_Age;
	}

} // namespace semtl
