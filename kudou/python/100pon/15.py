#問題15: 文字列 → 数値
# 文字列型の変数sに”123″を代入し、sを整数型に変換して出力してください。
# 文字列型の変数sに”3.14″を代入し、sを浮動小数点型に変換して出力してください。

def str():
    s = "123"
    message = "3.14"
    s = int(s)
    message = float(message)
    print(s)
    print(message)

if __name__ == "__main__":
    str()