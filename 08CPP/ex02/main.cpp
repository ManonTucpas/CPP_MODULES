#include "MutantStack.hpp"
#include <list>
#include <algorithm>

void	test_list(void)
{
	std::cout << "********************LIST**************************\n";

	std::list<int> mstack;
	mstack.push_back(5);
	mstack.push_back(17);
	mstack.pop_back();
	std::cout << "Size is : " << mstack.size() << std::endl;
	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		 ++it;
	}
}

void	test_string(void)
{
	std::cout << "********************STRING**************************\n";
	MutantStack<std::string> mstack;
	mstack.push("Hello");
	mstack.push("This is the end of CPP!!!!!! :D");
	mstack.pop();
	std::cout << "Size is : " << mstack.size() << std::endl;
	mstack.push("Push 1");
	mstack.push("Push 2");
	mstack.push("Push 3");
	mstack.push("Push 4");
	MutantStack<std::string>::iterator it = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		 ++it;
	}
	std::cout << "********************REVERSE**************************\n";
	MutantStack<std::string>::reverse_iterator itr;
	MutantStack<std::string>::reverse_iterator iter;
	for(itr = mstack.rbegin(), iter = mstack.rend(); itr != iter; itr++)
		std::cout << *itr << std::endl;
}

int main(void)
{
	test_list();
	test_string();
	std::cout << "********************MUTANTSTACK**************************\n";

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.pop();
	std::cout << "Size is: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator max = std::max_element(mstack.begin(), mstack.end());
	MutantStack<int>::iterator min = std::min_element(mstack.begin(), mstack.end());
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		 ++it;
	}
	std::cout << "Max is: " << *max << std::endl;
	std::cout << "Min is: " << *min << std::endl;
   	std::stack<int> s(mstack);
   
	std::cout << "********************REVERSE**************************\n";
	MutantStack<int>::reverse_iterator itr;
	MutantStack<int>::reverse_iterator iter;
	for(itr = mstack.rbegin(), iter = mstack.rend(); itr != iter; itr++)
		std::cout << *itr << std::endl;
	return 0;
}