interface Person {
  name: string;
  age: number;
}

interface Employee extends Person {
  employeeId: string;
  department: string;
}

const employee: Employee = {
  name: "田中花子",
  age: 28,
  employeeId: "E12345",
  department: "開発部"
};

console.log(employee);
