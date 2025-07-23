// 🧪 Task: Balanced Parentheses Checker using Stack
//
// 📝 Problem Description:
// Given a string that contains only parentheses: '(', ')', '{', '}', '[', ']'
// Write a function that checks if the parentheses are properly balanced.
//
// ✅ A string is considered "Balanced" if:
// 1. Every opening bracket has a corresponding closing bracket of the same type.
// 2. Brackets are closed in the correct order.
//
// ✅ Examples:
//
// Input: "()"        → Output: Balanced ✅
// Input: "([]{})"    → Output: Balanced ✅
// Input: "([)]"      → Output: Not Balanced ❌
// Input: "((("       → Output: Not Balanced ❌
// Input: "{[(])}"    → Output: Not Balanced ❌
// Input: "" (empty)  → Output: Balanced ✅
//
// 🎯 Instructions:
// - Use a `stack<char>`
// - Traverse the string character by character.
// - If the character is an opening bracket → push it to the stack.
// - If it’s a closing bracket → check if the top of the stack is the matching opening bracket.
// - If yes → pop it. If no or stack is empty → Not Balanced.
// - At the end, if the stack is empty → the string is Balanced.
//
// 🛠 Optional Enhancement:
// Test your function on multiple expressions in a loop.
//
// 🚀 Goal:
// Implement the function `bool isBalanced(string s);`
// and test it using standard input in `main()`.
