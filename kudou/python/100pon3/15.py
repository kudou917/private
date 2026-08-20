# 文字列型の変数sに”123″を代入し、sを整数型に変換して出力してください。
# 文字列型の変数sに”3.14″を代入し、sを浮動小数点型に変換して出力してください。

def main():
    s = "123"
    print(int(s))
    return

def sub():
    s = "3.14"
    print(str(s))
    return

if __name__ == "__main__":
    main()
    sub()