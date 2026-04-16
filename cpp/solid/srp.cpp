
#include <iostream>
#include <string>
#include <vector>

// Responsabilidade: Gerenciar os dados da fatura
class Invoice {
public:
    Invoice(double amount) : m_amount(amount) {}
    double getAmount() const { return m_amount; }
private:
    double m_amount;
};

// Responsabilidade: Lidar com a exibição (I/O)
class InvoicePrinter {
public:
    void print(const Invoice& invoice) {
        std::cout << "Fatura no valor de: R$ " << invoice.getAmount() << std::endl;
    }
};

int main() {
    Invoice myBill(150.50);
    InvoicePrinter printer;
    printer.print(myBill);
    return 0;
}
