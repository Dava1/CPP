#include "TelephonesNumberBook.h"

Model::ElementList::ElementList(Entita::Person& person)
{
	this->person = person;
	this->next = nullptr;
}

Model::ElementList::~ElementList()
{
}

Entita::Person* Model::ElementList::GetPerson()
{
	return &person;
}

Model::ElementList* Model::ElementList::GetNext() const
{
	return this->next;
}


void Model::ElementList::SetNext(ElementList* next)
{
	this->next = next;
}

Model::TelephonesNumbersBook::~TelephonesNumbersBook()
{
	if (_head == nullptr)
	{
		delete _head;
	}
	else 
	{
	ElementList* iterator = _head;
	while (iterator->GetNext() != nullptr)
	{
		ElementList* temprorary = iterator->GetNext();
		delete iterator;
		iterator = temprorary;
	}
	}
}

void Model::TelephonesNumbersBook::AddPerson(Entita::Person* person)
{
	if(_head==nullptr)
	{
		_head = new ElementList(*person);
	}
	else
	{
		ElementList* temproty_element = _head;
		while (temproty_element->GetNext()!=nullptr)
		{
			temproty_element = temproty_element->GetNext();
		}
		temproty_element->SetNext(new ElementList(*person));
	}
}

std::string Model::TelephonesNumbersBook::LookTelephoneNumber(std::string name) const
{
	if (name == "")
	{
		throw std::invalid_argument("Empty argument");
	}
	ElementList* iterator = _head;
	while (iterator->GetNext() != nullptr)
	{
		if (iterator->GetPerson()->GetName == name)
		{
			return iterator->GetPerson()->GetTelephoneNumbers();
		}
	}
	throw "Number not found!";
}

std::string Model::TelephonesNumbersBook::LookTelephoneNumber(int id) const
{
	if (id < 0)
	{
		throw std::invalid_argument("incorrect number!");
	}
	ElementList* iterator = _head;
	while (iterator->GetNext() != nullptr)
	{
		if (iterator->GetPerson()->GetId == id)
		{
			return iterator->GetPerson()->GetTelephoneNumbers();
		}
	}
	throw "Number not found!";
}
