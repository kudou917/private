#問題3: 四則演算+
#整数型の変数xとyにそれぞれ10と20を代入して、xとyを足した値を出力してください。
#文字列型の変数nameとmessageにそれぞれ”John”と”Hello”を代入して、messageとnameを結合して
# ”Hello John”と出力してください。

def plus1():
    x = 10
    y = 20
    print(x+y)

def plus2():
    name = "John"
    message = "Hello "
    print(message+name)

if __name__ == "__main__":
    plus1()
    plus2()