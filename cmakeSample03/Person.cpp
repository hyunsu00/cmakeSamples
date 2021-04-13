// Person.cpp
//
#include "Person.h"

namespace semtl {

	Person::Person(const std::wstring& name, int age)
	: m_Name(name)
	, m_Age(age)
	{
	}

	const std::wstring& Person::getName() const
	{
		return m_Name;
	}

	int Person::getAge() const
	{
		return m_Age;
	}
}
