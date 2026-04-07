
class Pizza:
    def __init__(self):
        self.ingredientes = []

    def __str__(self):
        return f"Pizza com: {', '.join(self.ingredientes)}"

class PizzaBuilder:
    def __init__(self):
        self.pizza = Pizza()

    def add_queijo(self):
        self.pizza.ingredientes.append("Queijo")
        return self # Permite encadeamento (fluent interface)

    def add_pepperoni(self):
        self.pizza.ingredientes.append("Pepperoni")
        return self

    def build(self):
        return self.pizza

# Uso
minha_pizza = PizzaBuilder().add_queijo().add_pepperoni().build()
print(minha_pizza)
