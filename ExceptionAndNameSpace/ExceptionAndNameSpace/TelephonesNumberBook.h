#ifndef _TELEPHONES_NUMBERS_BOOK_H
#define _TELEPHONES_NUMBERS_BOOK_H
#include <string>
#include <stdexcept>
#include "Person.h"
using namespace Entita;
namespace Model 
{

	struct ElementList 
	{
	public:
		explicit ElementList(Person& person);
		~ElementList();
		Person* GetPerson();
		ElementList* GetNext() const;
		void SetNext(ElementList* next);
	private:
		Entita::Person person;
		ElementList* next;
	};
	
	
	
	class TelephonesNumbersBook 
	{
	public:
		~TelephonesNumbersBook();
		void AddPerson(Entita::Person* person);
		std::string LookTelephoneNumber(std::string name) const;
		std::string LookTelephoneNumber(int id)const;
	private:
		ElementList* _head;
	};
}

#endif // !_TELEPHONES_NUMBERS_BOOK_H 