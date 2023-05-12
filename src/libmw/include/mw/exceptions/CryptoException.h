#pragma once

#include <mw/exceptions/XCLException.h>
#include <mw/util/StringUtil.h>

#define ThrowCrypto(msg) throw CryptoException(msg, __FUNCTION__)
#define ThrowCrypto_F(msg, ...) throw CryptoException(StringUtil::Format(msg, __VA_ARGS__), __FUNCTION__)

class CryptoException : public XCLException
{
public:
    CryptoException(const std::string& message, const std::string& function)
        : XCLException("CryptoException", message, function)
    {

    }
};