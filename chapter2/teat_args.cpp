#include "iostream"
int main(int argc, char** argv)
{
    std::cout << "parameter = " << argc << std::endl;
    std::cout << "programname = " << argv[0] << std::endl;
    std::string arg1 =argv[1];
    if(arg1 == "--help")
    {
        std::cout << "this is help, but program is unuserful" << std::endl;
    }
    return 0;
}