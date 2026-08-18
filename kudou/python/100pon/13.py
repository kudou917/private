#問題13: 文字列（upper）
# 文字列型の変数sに”world”を代入し、sを全て大文字に変換して出力してください。
# 文字列型の変数messageに”good evening”を代入し、messageを全て大文字に変換して出力してください。

def low():
    s = "world"
    message = "good evening"
    s = s.upper()
    message = message.upper()
    print(s)
    print(message)

if __name__ == "__main__":
    low()