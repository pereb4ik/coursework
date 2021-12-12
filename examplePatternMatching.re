let greeting = person =>
  switch (person) {
  | Teacher => "Hey Professor!"
  | Director => "Hello Director."
  | Student("Andrew") => "Still here Ilya?"
  | Student(anyOtherName) => "Hey, " ++ anyOtherName ++ "."
  }