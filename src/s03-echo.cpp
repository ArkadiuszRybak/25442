
#include <iostream>
#include <string>


auto main(int argc, char *argv[]) -> int
{
    if (argc<=1)
    {
        std::cout << "no input";
    }
    else
    {

        if (std::string(argv[1]) == "-r")
        {
            if(std::string(argv[2]) == "-n")
            {
                 for(int i=argc-1; i>=3; i--)
                 {
                     std::cout<<std::string(argv[i])<<" ";
                 }
            }    
            else if(std::string(argv[2]) == "-l")
            {
                 for(int i=argc-1; i>=3; i--)
                 {
                     std::cout<<std::string(argv[i])<<std::endl;
                 }
            }    
            else 
            {
                 for(int i=argc-1; i>=2; i--)
                 {
                     std::cout<<std::string(argv[i])<<" ";
                 }std::cout<<std::endl;
            }                
        }
        else if (std::string(argv[1]) == "-n")
        {
            for(int i=2; i<argc; i++)
                 {
                     std::cout<<std::string(argv[i])<<" ";
                 }
        }
        else if (std::string(argv[1]) == "-l")
        {
            for(int i=2; i<argc; i++)
                 {
                     std::cout<<std::string(argv[i])<<std::endl;
                 }
        }
        else
        {
            for(int i=1; i<argc; i++)
                {
                    std::cout<<std::string(argv[i])<<" ";
                }std::cout<<std::endl;
        }        
    }
}