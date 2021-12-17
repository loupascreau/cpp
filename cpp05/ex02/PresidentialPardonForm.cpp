#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "Constructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
	*this = obj;
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	std::cout << "Assignation operator useless for " << &obj << std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor PresidentialPardonForm called" << std::endl;
}