// 基本的なインターフェース
interface User {
  id: number;
  name: string;
  email: string;
  isActive?: boolean; // オプショナルプロパティ（あってもなくてもOK）
}

// インターフェースの実装
const newUser: User = {
  id: 1,
  name: "鈴木一郎",
  email: "suzuki@example.com"
};

// 読み取り専用プロパティ
interface Config {
  readonly apiKey: string;
  timeout: number;
}

const settings: Config = {
  apiKey: "abc123",
  timeout: 3000
};

console.log(newUser);
console.log(settings);
// settings.apiKey = "xyz"; // エラー: 読み取り専用プロパティは変更できません