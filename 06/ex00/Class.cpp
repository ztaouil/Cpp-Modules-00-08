#include "Class.hpp"

Class::Class(std::string const &str) : _str(str)
{
}

Class::Class(void){};

Class::~Class(void){};

Class	&Class::operator=(Class const &rhs)
{
	if (this != &rhs)
	{
		(void)rhs;
	}
	return *this;
}

Class::Class(Class const &rhs)
{
	*this = rhs;
}

Class::operator char()
{
	if (_str.length() == 1 || std::isdigit(_str[0]))
	{
		try
		{
			int c = std::stoi(_str);
			if (!isprint((char)c))
				throw NotPrintableException();
			std::cout << "char: " << (char)c << std::endl;
			return c;
		}
		catch (NotPrintableException &e)
		{	
			std::cout << e.what() << std::endl;
		}
		catch (std::out_of_range &e){
			std::cout << "char: impossible" << std::endl; 
		}
	}else{
		std::cout << "char: impossible" << std::endl; 
	}
	return 1;
}

Class::operator int ()
{
	if (_str.length() == 1 || std::isdigit(_str[0]))
	{
		try{
			long c = std::stol(_str);
			if ( c > INT_MAX || c < INT_MIN)
				throw IntOutOfBounds();
			std::cout << "int: " << (int)c << std::endl;
			return c;
		}
		catch (IntOutOfBounds &e){
			std::cout << e.what() << std::endl;
		}

	}else{
		std::cout << "int: impossible" << std::endl;
	}
	return 1;
}

std::string 	Class::get_str(void) const
{
	return _str;
}

void	Class::Scalar()
{
	(void)static_cast<char>(*this);
	(void)static_cast<int>(*this);
	//(void)static_cast<float>(hs.get_str());
	//(void)static_cast<double>(hs.get_str());
	
}

/*
char int float double
*/