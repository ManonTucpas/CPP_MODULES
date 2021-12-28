#include "Weapon.hpp"

Weapon::Weapon (std::string weaponType) {

	setType(weaponType);
	return ;
}

Weapon::~Weapon (void) {
	
	return ;
}

std::string const	&Weapon::getType(void) const {

	return (_type);
}

void    Weapon::setType(std::string weaponType) {

	_type = weaponType;
	return ;
}
