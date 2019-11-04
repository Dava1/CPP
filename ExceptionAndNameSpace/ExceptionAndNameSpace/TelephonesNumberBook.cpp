#include "TelephonesNumberBook.h"

void Model::NodeList::InsertToBegin(Person newdata)
{
	Node* newNode = (struct Node*) malloc(sizeof(newNode));
	newNode->data = newdata;
	newNode->next = head;
	head = newNode;
}

std::string Model::NodeList::FindNode(std::string name)
{
	Node* iterator = head;
	while (iterator->next == nullptr)
	{
		if (iterator->data.GetName() == name)
		{
			return iterator->data.GetTelephoneNumbers();
		}
		else throw "File nod found!";
	}
}

std::string Model::NodeList::FindNodeForId(int id)
{
	Node* iterator = head;
	while (iterator->next == nullptr)
	{
		if (iterator->data.GetId == id)
		{
			return iterator->data.GetTelephoneNumbers();
		}
		else throw "File nod found!";
	}
}

void Model::NodeList::ClearList()
{
	Node* temp = head;
	while (temp = nullptr) 
	{
		temp = temp->next;
	}
}

Model::TelephonesNumbersBook::TelephonesNumbersBook()
{
}

Model::TelephonesNumbersBook::~TelephonesNumbersBook()
{
}

void Model::TelephonesNumbersBook::AddPerson(Person person)
{
	_nodeList->InsertToBegin;
}

std::string Model::TelephonesNumbersBook::LookTelephoneNumber(std::string name) const
{
	_nodeList->FindNode(name);
}

std::string Model::TelephonesNumbersBook::LookTelephoneNumber(int id) const
{
	_nodeList->FindNodeForId(id);
}
