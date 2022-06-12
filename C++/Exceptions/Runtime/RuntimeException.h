// Runtime Exception Specification
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#ifndef RuntimeException_H
#define RuntimeException_H

#include <string>

class RuntimeException {
public:
    RuntimeException(const std::string& error);
    ~RuntimeException();
    std::string getMessage() const;
private:
    std::string errorMsg;
};


#endif
