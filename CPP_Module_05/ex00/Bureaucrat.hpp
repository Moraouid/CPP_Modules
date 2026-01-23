/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 20:50:06 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/17 21:28:22 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>

class Bureaucrat
{
  private:
	std::string name;
	int grade;

  public:
	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const throw();
	};

	Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
    Bureaucrat(std::string name, int grade);
	Bureaucrat &operator=(const Bureaucrat &other);

	std::string getName() const;
	int getGrade() const;

    void  decrementGrade();
    void  incrementGrade();

	~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
