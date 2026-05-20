//项目2：UniquePointerDemo（半天）
//创建一个类，构造和析构时打印信息
//
//用 std::unique_ptr 创建对象
//
//写一个函数接收 std::unique_ptr 参数
//
//在main中转移所有权
//
//验证离开作用域时自动析构（看到打印信息）

#include<iostream>
#include<memory>

class T
{
public:
	T()
	{
		std::cout << "构造函数正在运行" << std::endl;
	}
	~T()
	{
		std::cout << "析构函数正在运行" << std::endl;
	}
	void sayHello()
	{
		std::cout << "Hello World from T" << std::endl;
	}
private:




};

void takeOwnerShip(std::unique_ptr<T> ptr)
{
	std::cout << "函数內部" << std::endl;
	ptr->sayHello();
}


int main()
{
	auto ptr = std::make_unique<T>();
	ptr->sayHello();

	takeOwnerShip(std::move(ptr));
	if (ptr == nullptr)
	{
		std::cout << "ptr 是空指针" << std::endl;
	}

	return 0;
}







