#include <cctype>
#include <iostream>
#include <string>

void megaphone(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        for (size_t j = 0; j < strlen(argv[i]); j++)
        {
            std::cout << (char)toupper(argv[i][j]);
        }
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        megaphone(argc, argv);
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
}
