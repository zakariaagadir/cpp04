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
        const std::string* getideas() const;
        void setideas(std::string* newideas);
        ~Brain();
};






#endif
