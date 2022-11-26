
#ifndef DECORADOR_HELADO_H
#define DECORADOR_HELADO_H

#include "baseHelado.h"

class decoradorHelado : public baseHelado {
protected:
    decoradorHelado(baseHelado*);

public:
    virtual std::string descripcion() const;
    virtual double precio() const;

private:
    baseHelado* _base;
};

#endif /* DECORADOR_HELADO_H */
