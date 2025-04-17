#include <iostream>
#include <memory>

int main()
{
    auto p1 = std::make_shared<std::string>("This is a str.");
    // std::make_shared<数据类型/类>(参数);
    // 返回值：对应类的共享指针

    std::cout << "p1 times = " << p1.use_count() << ", address = " << p1.get() << std::endl;
    
    auto p2 = p1;
    std::cout << "p1 times = " << p1.use_count() << ", address = " << p1.get() << std::endl;
    std::cout << "p2 times = " << p2.use_count() << ", address = " << p2.get() << std::endl;
 
    p1.reset(); // 释放引用，不指向“this is a str." 所在内存
    std::cout << "p1 times = " << p1.use_count() << ", address = " << p1.get() << std::endl;
    std::cout << "p2 times = " << p2.use_count() << ", address = " << p2.get() << std::endl;
    std::cout << "p2 address number = " << p2->c_str() << std::endl;
 
    return 0;
}