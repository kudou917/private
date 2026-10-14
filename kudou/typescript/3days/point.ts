interface Point {
  x: number;
  y: number;
  z: number;
}

function printPoint(p: Point) {
  console.log(`x座標: ${p.x}, y座標: ${p.y}, z座標: ${p.z}`);
}

// 明示的にPointインターフェースを実装していなくても
// 必要なプロパティがあれば型として互換性がある
const point3D = { x: 10, y: 20, z: 30 };
printPoint(point3D); // 問題なく動作します