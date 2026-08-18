#問題12: 文字列（lower）
# 文字列型の変数sに”Hello”を代入し、sを全て小文字に変換して出力してください。
# 文字列型の変数messageに”GOOD AFTERNOON”を代入し、messageを全て小文字に変換して出力してください。

def low():
    s = "Hello"
    message = "GOOD AFTERNOON"
    s = s.lower()
    message = message.lower()
    print(s)
    print(message)

if __name__ == "__main__":
    low()