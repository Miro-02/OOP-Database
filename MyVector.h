#include <vector>
#include <string>
template <typename string>
class MyVector
{
private:
    std::vector<string> mData;
public:
    MyVector(/* args */);
    MyVector(const std::vector<string>& data);
    MyVector operator=(const std::vector<string>& data);
    ~MyVector();
};

MyVector::MyVector(/* args */)
{
}

MyVector::~MyVector()
{
}
