// Person.h
//
#pragma once
#include <string>

namespace semtl {

	class Person {
	public:
		Person(const std::wstring& name, int age);
	public:
		const std::wstring& getName() const;
		int getAge() const;
	private:
		std::wstring m_Name;
		int m_Age;
	}; // class Person

} // namespace semtl
