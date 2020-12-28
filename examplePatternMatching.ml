let greeting person =
  match person with
  | Teacher  -> "Hey Professor!"
  | Director  -> "Hello Director."
  | Student ("Andrew") -> "Still here Ilya?"
  | Student (anyOtherName) -> "Hey, " ^ anyOtherName ^ "."