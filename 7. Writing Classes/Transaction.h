#include <string>

class Transaction
{
    private:
    int amount;
    std::string type; // a better way exists (apparently)

    public:
    Transaction(int amt, std::string kind);
    std::string Report();
};