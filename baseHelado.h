
#ifndef BASE_HELADO_H
#define BASE_HELADO_H

#include "objetoBase.h"

class baseHelado : public objetoBase {
public:
    virtual std::string descripcion() const = 0;
    virtual double precio() const = 0;
    
    virtual std::string toString() const;
};

#endif /* BASE_HELADO_H */
