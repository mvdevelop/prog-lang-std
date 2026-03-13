
// builder.js

class UserBuilder {
  constructor(name) {
    this.user = { name };
  }

  setAge(age) {
    this.user.age = age;
    return this;
  }

  setEmail(email) {
    this.user.email = email;
    return this;
  }

  build() {
    return this.user;
  }
}

const user = new UserBuilder("Marcos")
  .setAge(30)
  .setEmail("marcos@email.com")
  .build();

console.log(user);
