#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>
#include <string_view>

class PasswordManager{
    private:
    static const std::string m_master;
    
    public:
    bool queryAccess(std::string_view master) const;
};

#endif