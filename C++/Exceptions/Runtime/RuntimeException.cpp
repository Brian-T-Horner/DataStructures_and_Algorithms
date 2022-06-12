// Runtime Exception Implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "RuntimeException.h"

RuntimeException::RuntimeException(const std::string &error): errorMsg(error) {}
RuntimeException::~RuntimeException() {}
std::string RuntimeException::getMessage() const {return errorMsg;}