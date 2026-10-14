"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.CatImage = CatImage;
const jsx_runtime_1 = require("react/jsx-runtime");
// 画像を表示するコンポーネント
function CatImage({ url }) {
    return ((0, jsx_runtime_1.jsx)("div", { children: (0, jsx_runtime_1.jsx)("img", { src: url }) }));
}
//# sourceMappingURL=cat-image.js.map