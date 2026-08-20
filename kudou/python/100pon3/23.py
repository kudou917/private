# リストaに整数型の要素1から5までを追加し、リストaに整数型の要素3が含まれている場合は”3 is in a”、
# そうでない場合は”3 is not in a”と出力してください。
# 2. リストbに文字列型の要素”apple”, “banana”, “cherry”を追加し、
# リストbに文字列型の要素”banana”が含まれている場合は”banana is in b”、
# そうでない場合は”banana is not in b”と出力してください。

def main():
    a = [1, 2, 3, 4, 5]
    if 3 in a:
        print("3 is in a")
    else:
        print("3 is not in a")
    return

def sub():
    b = ["apple", "banana", "cherry"]
    if "banana" in b:
            print("banana is in b")
    else:
            print("banana is not in b")
    return

if __name__ == "__main__":
    main()
    sub()