// ユニオン型（複数の型のいずれかを取りうる）
function formatValue(value: string | number): string {
  if (typeof value === "string") {
    return value.toUpperCase();
  }
  return `${value.toFixed(2)}`;
}

// リテラル型（特定の値のみを許可）
type Direction = "up" | "down" | "left" | "right";
let moveDirection: Direction = "up"; // OK
// moveDirection = "diagonal"; // エラー: "diagonal"は許可されていない値

// ユニオン型とリテラル型の組み合わせ
type Status = "loading" | "success" | "error" | number;
