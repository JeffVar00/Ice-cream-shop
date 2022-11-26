
#ifndef HELADO_YOGURT_H
#define HELADO_YOGURT_H

#include "baseHelado.h"

class heladoYogurt : public baseHelado {
public:
    virtual std::string descripcion() const;
    virtual double precio() const;
};

#endif /* HELADO_YOGURT_H */
