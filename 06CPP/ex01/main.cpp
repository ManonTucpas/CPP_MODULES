#include <iostream>
#include <string>
#include <stdint.h>

typedef struct s_data
{
	int 		age;
	std::string	name;
	float		exact_age;
}		Data;

void	init_data(Data *ptr)
{
	ptr->age = 30;
	ptr->name = "manon";
	ptr->exact_age = 30.6;
}

uintptr_t   serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data* data =  new Data;
	init_data(data);
	std::cout << "******VALUES INITIAL DATA******\n" << std::endl;
	std::cout << "AGE       : " << data->age << std::endl;
	std::cout << "NAME      : " << data->name << std::endl;
	std::cout << "EXACT AGE : " << data->exact_age << std::endl;

	std::cout << "\n******SERIALISATION******\n\n";
	uintptr_t	raw = serialize(data);
	std::cout << "Value of raw serialized : " << raw << std::endl;

	std::cout << "\n******DESERIALISATION******\n\n";
	data = deserialize(raw);
	std::cout << "******DATA'S VALUES AFTER SERIALISATION AND DESERIALISATION DATA******\n" << std::endl;
	std::cout << "AGE       : " << data->age << std::endl;
	std::cout << "NAME      : " << data->name << std::endl;
	std::cout << "EXACT AGE : " << data->exact_age << std::endl;


}