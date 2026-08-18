#問題14: 文字列（文字数）
# 文字列型の変数sに”Hello, world!”を代入し、sの文字数を出力してください。
# 文字列型の変数messageに”Good night”を代入し、messageの文字数を出力してください。

def count():
    s = "Hello, world!"
    message = "Good night"
    print(len(s))
    print(len(message))

if __name__ == "__main__":
    count()