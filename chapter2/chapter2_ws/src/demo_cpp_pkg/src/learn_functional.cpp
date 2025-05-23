#include <iostream>
#include <functional> // 函数包装器头文件

// 自由函数
void save_with_free_fun(const std::string &file_name)
{
    std::cout << "自由函数:" << file_name << std::endl; 
}

// 成员函数
class FileSave
{
private:
    /* data */
public:
    FileSave(/* args */) = default;
    ~FileSave() = default;

    void save_with_member_fun(const std::string &file_name)
    {
        std::cout << "成员方法:" << file_name << std::endl; 
    };
};

int main()
{
    FileSave file_save;

    // Lambda函数
    auto save_with_lambda_fun = [](const std::string &file_name) -> void
    {
        std::cout << "Lambda函数" << file_name << std::endl;
    };

    save_with_free_fun("file.txt");
    file_save.save_with_member_fun("file.txt");
    save_with_lambda_fun("file.txt");

    std::function<void(const std::string&)> save1 = save_with_free_fun;
    std::function<void(const std::string&)> save2 = save_with_lambda_fun;
    std::function<void(const std::string&)> save3 = std::bind(&FileSave::save_with_member_fun, &file_save, std::placeholders::_1);
    // 统一调用的方法
    save1("file.txt");
    save2("file.txt");
    save3("file.txt");


  

    return 0;
}
