#ifndef TPILA1_H
#define TPILA1_H
#include <iostream>
#include <stdexcept>

template< class T >
class Pila
{
public:
    Pila( int = 10);

    ~Pila() {delete [] ptrPila;}
    bool push( const T& );
    bool pop( T& );

private:
    int tamanio;
    int cima;
    T *ptrPila;

    bool estaVacia() const {return cima == -1;}
    bool estaLlena() const {return cima == tamanio-1;}
};

template<class T>
Pila <T>::Pila(int tam){
    this->tamanio = tam > 0 ? tam : 10;
    cima = -1;
    ptrPila = new T[tamanio];
}

template< class T >
bool Pila<T>::push(const T& colocaValor){
    if (!estaLlena())
    {
        ptrPila[++cima] = colocaValor;
        return true;
    }
    return false;
}

template< class T >
bool Pila<T>::pop(T& sacaValor){
    if (!estaVacia())
    {
        sacaValor = ptrPila[cima--];
        return true;
    }
    return false;
}


#endif // TPILA1_H
