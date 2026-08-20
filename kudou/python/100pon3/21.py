# リストaに整数型の要素1から5までを追加し、forループとenumerateを使って、
# リストaのインデックスと要素を出力してください。
# リストbに文字列型の要素”apple”, “banana”, “cherry”を追加し、
# forループとenumerateを使って、リストbのインデックスと要素を出力してください。
# 忘れてた

def main():
    a = [1, 2, 3, 4, 5]
    for i, name  in enumerate(a):
        print(i,name)
    return

def sub():
    b = ["apple", "banana", "cherry"]
    for i, name  in enumerate():
        print(i,name)
    return

if __name__ == "__main__":
    main()
    sub()