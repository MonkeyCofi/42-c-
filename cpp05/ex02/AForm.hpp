/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <pipolint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:34:59 by pipolint          #+#    #+#             */
/*   Updated: 2024/12/19 20:55:41 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class	AForm
{
	private:
		const std::string	m_name;
		bool				m_signed;
		const int			m_sign_grade;
		const int			m_exec_grade;
	protected:
		const std::string	m_target;
	public:
		AForm();
		AForm(const AForm& obj);
		AForm(std::string name, int sign_grade, int exec_grade);
		virtual ~AForm() = 0;

		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		virtual void		beSigned(Bureaucrat& b);
		void				execute(Bureaucrat const& executor) const;
		
		class	GradeTooHighException
		{
			public:
				const char*	what();
		};
		class	GradeTooLowException
		{
			public:
				const char*	what();
		};
		class	UnsignedFormException
		{
			public:
				const char*	what();
		};
		class	GradeTooLowExecExeption
		{
			public:
				const char*	what();
		};
};

std::ostream&	operator<<(std::ostream& os, const AForm& obj);

#endif