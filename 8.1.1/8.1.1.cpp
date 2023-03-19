#include <iostream>
#include <string>

void Func1(std::string str, int& count_plus, int& count_minus, int& count_equal);
void Func2(std::string& str);

int main()
{
	std::string str;
	int count_plus = 0, count_minus = 0, count_equal = 0;

	std::cout << "TASK 1\n";
	std::cout << "Enter string: ";
	std::getline(std::cin, str);
	Func1(str, count_plus, count_minus, count_equal);

	std::cout << "Count plus: " << count_plus << "\nCount minus: " << count_minus << "\nCount equal: " << count_equal;

	std::cout << "\n\nTASK 2\n";
	Func2(str);
	std::cout << str;
}

void Func1(std::string str, int& count_plus, int& count_minus, int& count_equal)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '+')
		{
			count_plus++;
		}
		else if (str[i] == '-')
		{
			count_minus++;
		}
		else if (str[i] == '=')
		{
			count_equal++;
		}
	}
}

void Func2(std::string& str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '+' && str[i + 1] == '+'
			|| str[i] == '-' && str[i + 1] == '-'
			|| str[i] == '=' && str[i + 1] == '=')
		{
			str.replace(i, 2, "***");
		}
	}
}