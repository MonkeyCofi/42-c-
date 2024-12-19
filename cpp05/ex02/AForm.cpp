/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:40:58 by pipolint          #+#    #+#             */
/*   Updated: 2024/12/19 20:52:41 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): m_name("Form"), m_signed(false), m_sign_grade(0), m_exec_grade(0)
{
	;
};

AForm::~AForm()
{
	std::cout << "\033[31mDestructor for Form " << this->m_name << " was called\033[0m\n";
};

// copy constructor
AForm::AForm(const AForm& form) : m_name(form.m_name), m_signed(form.m_signed), \
	m_sign_grade(form.m_sign_grade), m_exec_grade(form.m_exec_grade)
{
	;
};

// paramterized constructor
AForm::AForm(std::string name, int sign_grade, int exec_grade) : m_name(name), \
	m_signed(false), m_sign_grade(sign_grade), m_exec_grade(exec_grade)
{
	;
}

const std::string	AForm::getName() const
{
	return (this->m_name);
};

bool	AForm::getSigned() const
{
	return (this->m_signed);
};

int		AForm::getSignGrade() const
{
	return (this->m_sign_grade);
};

int		AForm::getExecGrade() const
{
	return (this->m_exec_grade);
}

void	AForm::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->m_sign_grade)
		throw AForm::GradeTooLowException();
	this->m_signed = true;
}

const char*	AForm::GradeTooHighException::what()
{
	return "Form: Grade too high\n";
}

const char*	AForm::GradeTooLowException::what()
{
	return "Form: Grade too low\n";
}

const char*	AForm::UnsignedFormException::what()
{
	return "Form: Form is unsigned\n";
}

const char*	AForm::GradeTooLowExecExeption::what()
{
	return "Form: Form cannot be executed due to grade being too low\n";
}

std::ostream&	operator<<(std::ostream& os, const AForm& obj)
{
	std::cout << obj.getName() << ", signed: " << (obj.getSigned() == true ? "true" : "false") \
		 << ", grade to sign: " << obj.getSignGrade() \
		 	<< " grade to exec: " << obj.getExecGrade() << "\n";
	return (os);
}

void		AForm::execute(Bureaucrat const& executor) const
{
	if (this->m_signed == false)
		throw UnsignedFormException();
	if (executor.getGrade() > this->m_sign_grade)
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > this->m_exec_grade)
		throw AForm::GradeTooLowExecExeption();
}
