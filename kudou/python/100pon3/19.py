# リストaに整数型の値1, 3, 4を追加して、整数型の値2をリストaの2番目に挿入してください。
# その後、aの内容を出力してください。
# リストbに文字列型の要素”apple”, “banana”, “cherry”を追加して、
# 文字列型の要素”orange”をリストbの3番目に挿入してください。その後、bの内容を出力してください。

def main():
    a = [1, 3, 4]
    a.insert(1,2)
    print(a)
    return

def sub():
    b = ["apple", "banana", "cherry"]
    b.insert(2, "orange")
    print(b)
    return

if __name__ == "__main__":
    main()
    sub()