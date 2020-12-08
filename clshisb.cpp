#include <iostream>

int main()
{
system("touch empty");
system("clear");
system("cp empty ~/.bash_history");
std::cout << "Cleared!\n";

return 0;
}
