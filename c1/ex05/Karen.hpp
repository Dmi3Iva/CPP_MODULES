//
// Created by Shandy Mephesto on 8/14/21.
//

#ifndef KAREN_HPP
#define KAREN_HPP
#include <string>
#include <iostream>



class Karen
{
public:
	Karen();
	void complain( std::string level );
	typedef  struct structKarenFunctions
	{
		std::string name;
		void (Karen::*method)(void);
	} karenFunctionsType;

private:

	karenFunctionsType _karenFunctions[4];
	void _debug( void );
	void _info( void );
	void _warning( void );
	void _error( void );
};


#endif //KAREN_HPP
