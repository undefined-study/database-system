const testTernaryOperator = () => {
  const a = 1;
  const b = 2;

  let c;

  a > b ? (c = "a의 값이 더 크다.") : (c = "b의 값이 더 크다.");

  console.log(c);
};

testTernaryOperator(); // b의 값이 더 크다.