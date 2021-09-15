#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
# include <stdlib.h>

class PhoneBook{
	private:
		Contact _contact[7];
		int		_index;
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add_contact(std::string *value);
		int		get_index(void);

		void	debugg(void) const;
};

void	op_add(void);
void	op_search(void);

void	print_usage(void);
void	print_err(void);

void	phonebook(void);

#endif