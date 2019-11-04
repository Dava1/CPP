#ifndef _TELEPHONES_NUMBERS_BOOK_H
#define _TELEPHONES_NUMBERS_BOOK_H
#include <string>
#include "Person.h"
using namespace Entita;
namespace Model 
{
	struct Node {
		struct Node* next;
		Person data;
	};
	
	struct NodeList 
	{
	void InsertToBegin(Person newdata);
	std::string FindNode(std::string name);
	std::string FindNodeForId(int id);
	void ClearList();
	struct Node* head = nullptr;
	};
	
	
	
	class TelephonesNumbersBook 
	{
	public:
		TelephonesNumbersBook();
		~TelephonesNumbersBook();
		void AddPerson(Person person);
		std::string LookTelephoneNumber(std::string name) const;
		std::string LookTelephoneNumber(int id)const;
	private:
		NodeList* _nodeList;
	};
}

#pragma once
#endif // !_TELEPHONES_NUMBERS_BOOK_H 