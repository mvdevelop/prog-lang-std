
/*
ERRADO:
class Payroll {
  calc(emp: any) {
    if (emp.role === 'Dev') return 5000;
    if (emp.role === 'Design') return 4500; // Precisa alterar a classe para cada novo cargo
  }
}
*/

interface Employee {
  calculateSalary(): number;
}

class Developer implements Employee {
  calculateSalary() { return 5000; }
}

class Designer implements Employee {
  calculateSalary() { return 4500; }
}

class Payroll {
  process(employee: Employee) {
    return employee.calculateSalary();
  }
}
