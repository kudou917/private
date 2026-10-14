function print() {
  const x = 1;
  if (true) {
    const x = 2;
    console.log(x);
  }
  console.log(x);
}