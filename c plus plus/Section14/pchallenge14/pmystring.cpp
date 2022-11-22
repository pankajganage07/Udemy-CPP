#include <iostream>
#include <cstring> 
#include "pmystring.h"

pmystring::~pmystring()
{   delete [] str;
}

pmystring::pmystring()pmystring
       : str{nullptr}{
           str = new char[1];
           *str = '\0';
       }

pmystring::pmystring(const char *s)
        :str {nullptr} {
            if (s=nullptr) {
                str = new char[1];
                *str = '\0';
            }else{
                str = new char[strlen(s)+1];
                strcpy(str, s);
            }
        }

//copy constructor
pmystring::pmystring(pmystring &&source)
      :str{nullptr}{
          str = new char[strlen(source.str)+1];
          strcpy =(str, source.str);
          std::cout << "copy constructor used"<< std<<endl;
      }
      
//move constructor
pmystring::pmystring(pmystring &&source)
      :str(source.str) {
          source.str = nullptr;
          std::cout <<"move constructor used" << std::endl;
      }
      
//copy assignment
pmystring &pmystring::operator=(const pmystring &rhs) {
    std::cout << "using copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
delete [] str;
str = new char [strlen(rhs.str)+1];
strcpy(str, rhs.str);
return *this;
}

//move assignment
pmystring &pmystring::operator=(pmystring &&rhs) {
    std::cout <<"using moveassignment"<< std::endl;
    if(this == &rhs)
        return *this;
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//getters
int pmystring::get_length() const { return strlen(str); }
const char *pmystring::get_str() const {return str;}

//make lowercase
pmystring pmystring::operator-() const{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for (size_t i=0, i<std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    pmystring temp {buff};
    delete [] buff;
    return temp;
}
