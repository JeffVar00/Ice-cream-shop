
#ifndef OBJETOBASE_H
#define OBJETOBASE_H

#include <iostream>

class objetoBase {
public:
    virtual ~objetoBase();

    virtual std::string toString() const = 0;
};

std::ostream& operator<<(std::ostream&, const objetoBase&);

#endif /* OBJETOBASE_H */

