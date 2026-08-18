#問題11: 文字列（replace）
# 文字列型の変数messageに”Good morning, John!”を代入し、”John”を”Jane”に置換して、
# 置換後の文字列を出力してください。
# 文字列型の変数sに”apple, banana, cherry”を代入し、”banana”を”orange”に置換して、
# 置換後の文字列を出力してください。

def re():
    message = "Good morning, John!"
    message = message.replace("John","Jane")
    s = "apple, banana, cherry"
    s = s.replace("banana","orange")
    print(message)
    print(s)

if __name__ == "__main__":
    re()