#ifndef _PERSON_H
#define _PERSON_H
#pragma once
#include <string>

namespace Entita 
{
	class Person
	{
	public:
		Person(std::string name,std::string telephoneNumber, int id);
		~Person();
		std::string GetName() const;
		std::string GetTelephoneNumbers() const;
		int GetId() const;
		void SetName(std::string name);
		void SetTelephoneNumber(std::string telephoneNumber);
		void SetId(int id);
	private:
		std::string name;
		std::string telephoneNumber;
		int id;
	};
}
#endif // !_PERSON_H