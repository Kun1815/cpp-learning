#include<iostream>
#include<fstream>
#include<string>
#include<unordered_map>
#include<sstream>

int main()
{
	std::ifstream file("test.txt");


	if (!file.is_open())
	{
	std::cerr << "无法打开文件！" << std::endl;
	return 1;
	}

	std::string line;
	std::unordered_map<std::string, int>dict;
	while (getline(file, line))
	{
		
		std::stringstream ss(line);
		std::string word;

		while (ss >> word)
		{
			dict[word]++;
		}


	}
	

	for (const auto& pair : dict)
	{
		std::cout << "单词： " << pair.first << "\t 出现次数： " << pair.second<<std::endl;
	}


	return 0;
}
