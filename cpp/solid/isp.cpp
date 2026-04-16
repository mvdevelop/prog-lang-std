
#include <iostream>

// Interface segregada para scanners
class IScanner {
public:
    virtual ~IScanner() = default;
    virtual void scan() = 0;
};

// Interface segregada para impressoras
class IPrinter {
public:
    virtual ~IPrinter() = default;
    virtual void print() = 0;
};

// Uma impressora simples só implementa o que faz
class SimplePrinter : public IPrinter {
public:
    void print() override { std::cout << "Imprimindo documento...\n"; }
};

// Uma multifuncional implementa ambas
class MultiFunctionMachine : public IPrinter, public IScanner {
public:
    void print() override { std::cout << "MFM Imprimindo...\n"; }
    void scan() override { std::cout << "MFM Escaneando...\n"; }
};

int main() {
    SimplePrinter basic;
    basic.print();

    MultiFunctionMachine mfp;
    mfp.print();
    mfp.scan();

    return 0;
}
