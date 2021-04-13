// Animal.h
//
#pragma once
#include <string>

namespace semtl {

	class Animal {
	public:
		Animal(const std::wstring& name, int age);
	public:
		const std::wstring& getName() const;
		int getAge() const;
	private:
		std::wstring m_Name;
		int m_Age;
	}; // class Animal

} // namespace semtl
