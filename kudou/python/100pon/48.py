# リストaに整数型の要素1から5までを代入し、aを昇順にソートしたリストをラムダ式を使って出力してください。
# リストbに文字列型の要素”banana”, “cherry”, “apple”を代入し、bを文字列の長さで昇順にソートしたリストを
# ラムダ式を使って出力してください。

def main():
    a = [1, 2, 3, 4, 5]
    new_list = sorted( a, key = lambda a: -a)
    print(new_list)
    return

def sub():
    b = ["banana", "cherry", "apple"]
    new_list = sorted( b, key = lambda n: len(n))
    print(new_list)
    return

if __name__ == "__main__":
    main()
    sub()