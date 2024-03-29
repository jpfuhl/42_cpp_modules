/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpfuhl <jpfuhl@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:24:36 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/09/14 19:36:32 by jpfuhl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

/* ************************************************************************** */
/*                         ShrubberyCreationForm Class                        */
/* ************************************************************************** */

/* ************************************************************************** */
/*                        Orthodox Canonical Class Form                       */
/* ************************************************************************** */

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("Shrubbery Creation Form", "Default", 145, 137)
{
	std::cout << "Default Constructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("Shrubbery Creation Form", target, 145, 137)
{
	std::cout << "Constructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs)
: AForm(rhs)
{
	std::cout << "Copy Constructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	std::cout << "Copy Assignment Operator ShrubberyCreationForm" << std::endl;
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}


/* ************************************************************************** */
/*                                Member Functions                            */
/* ************************************************************************** */

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw (AForm::GradeTooLowException());
	else
	{
		std::ofstream outfile(this->getTarget() + "_shrubbery");

		outfile <<
		"               ,@@@@@@@,\n"
		"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		"       |o|        | |         | |\n"
		"       |.|        | |         | |\n"
		"jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";

		outfile.close();
	}
}

/* ************************************************************************** */
/*                         ShrubberyCreationForm Class                        */
/* ************************************************************************** */
