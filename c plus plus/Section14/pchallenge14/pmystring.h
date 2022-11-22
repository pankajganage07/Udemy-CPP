#ifndef PMYSTRING_H
#define PMYSTRING_H

class pmystring
{
    
private:
      char *str;
public:
    pmystring();   //no arg onstructor
    pmystring( const char *s);
    pmystring(const pmystring &source);
    pmystring( const pmystring &&source);
    ~pmystring();
    
    pmystring &operator=(const pmystring &rhs);
    pmystring &operator=(pmystiring &&rhs);
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
    
    pmystring operator-() const;

};

#endif // PMYSTRING_H
