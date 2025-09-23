#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& newbrain);
        Brain& operator=(const Brain& newbrain);
        std::string* getideas() const;
        void getideas(std::string* newideas);
        ~Brain();
};






#endif
