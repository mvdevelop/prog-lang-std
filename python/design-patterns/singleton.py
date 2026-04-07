
class DatabaseConnection:
    _instance = None

    def __new__(cls):
        if cls._instance is None:
            print("Conectando ao banco de dados pela primeira vez...")
            cls._instance = super().__new__(cls)
        return cls._instance

# Teste
db1 = DatabaseConnection()
db2 = DatabaseConnection()

print(f"db1 é o mesmo que db2? {db1 is db2}") # True
