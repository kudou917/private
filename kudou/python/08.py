#問題8: 文字列（ランダムアクセス）
#文字列型の変数sに”hello”を代入して、sの2番目の文字を出力してください。
#2. 文字列型の変数messageに”Good morning”を代入して、messageの6番目の文字を出力してください。

def open1():
    s = "hello"
    print(s[1])#2番目

def open2():
    message = "Good morning"
    print(message[5])#6番目

if __name__ == "__main__":
    open1()
    open2()