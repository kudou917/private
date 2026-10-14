"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.default = Home;
exports.default = Home;
const jsx_runtime_1 = require("react/jsx-runtime");
function Home() {
    return (0, jsx_runtime_1.jsx)("div", { children: "\u732B\u753B\u50CF\u4E88\u5B9A\u5730" });
}
const server_1 = require("next/server"); // 追加
const cat_image_1 = require("./cat-image"); // 追加
const fetch_image_1 = require("./fetch-image"); // 追加
async function Home() {
    //           ^^^^^(1) asyncキーワードを追加
    // (2) ビルド時にfetchImageの結果が固定されないようにする
    await (0, server_1.connection)();
    // (3) APIから画像を取得
    const image = await (0, fetch_image_1.fetchImage)();
    // 画像のURLを渡す
    return (0, jsx_runtime_1.jsx)(cat_image_1.CatImage, { url: image.url });
}
//# sourceMappingURL=page.js.map