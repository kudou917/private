import { jsx as _jsx } from "react/jsx-runtime";
import "./like-button.css";
import { useState } from "react";
export function LikeButton() {
    const [count, setCount] = useState(999);
    const handleClick = () => {
        setCount(count + 1);
    };
    return (_jsx("button", { className: "like", onClick: handleClick, type: "button", children: count }));
}
//# sourceMappingURL=like-button.js.map