
// factory.js

class User {
  constructor(name) {
    this.name = name;
  }
}

class Admin {
  constructor(name) {
    this.name = name;
    this.role = "admin";
  }
}

function userFactory(type, name) {
  if (type === "admin") {
    return new Admin(name);
  }

  return new User(name);
}

const user1 = userFactory("user", "João");
const user2 = userFactory("admin", "Maria");

console.log(user1);
console.log(user2);
