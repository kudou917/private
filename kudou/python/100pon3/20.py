# リストaに整数型の要素1から5までを追加し、forループを使ってリストaの全ての要素を出力してください。
# リストbに文字列型の要素”apple”, “banana”, “cherry”を追加し、
# forループを使ってリストbの全ての要素を出力してください。

def main():
    a = [1, 2, 3, 4, 5]
    for i in a:
        print(i)
    return

def sub():
    b = ["apple", "banana", "cherry"]
    for i in b:
        print(i)
    return

if __name__ == "__main__":
    main()
    sub()