# 空のリストaを作成し、整数型の値1をaに追加して、次に整数型の値2をaに追加して、aの内容を出力してください。
# 空のリストbを作成し、文字列型の要素”apple”をbに追加して、次に文字列型の要素”banana”をbに追加して、
# bの内容を出力してください

def main():
    a = [1]
    a.append(2)
    print(a)
    return

def sub():
    b = ["apple"]
    b.append("banana")
    print(b)
    return

if __name__ == "__main__":
    main()
    sub()