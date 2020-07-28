#include<iostream>
#include<string>

class Welcome 
{
Welcome()
{
  ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
}
public:
    std::string ToDataStructure(std::string X) 
    {
        return X;
    }
};

int main()
{
  Welcome welcome;
  std::cout<<"Welcome To Data Structure And Algorithm 101 Mr. "<< welcome.ToDataStructure("NAME");
  return NULL;
}
