
#include <iostream>
#include <string>
#include <memory>

// Interface (Abstração)
class MessageService {
public:
    virtual ~MessageService() = default;
    virtual void send(const std::string& msg) = 0;
};

class EmailService : public MessageService {
public:
    void send(const std::string& msg) override {
        std::cout << "Enviando Email: " << msg << std::endl;
    }
};

// Classe de alto nível dependendo da abstração
class NotificationManager {
private:
    std::shared_ptr<MessageService> m_service;
public:
    NotificationManager(std::shared_ptr<MessageService> service) : m_service(service) {}
    
    void notify(const std::string& message) {
        m_service->send(message);
    }
};

int main() {
    auto email = std::make_shared<EmailService>();
    NotificationManager authNotify(email);
    
    authNotify.notify("Bem-vindo ao repositório SOLID!");
    return 0;
}
