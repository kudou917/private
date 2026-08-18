#問題9: 文字列（結合）
#文字列型の変数s1に”Hello,”を代入し、
#文字列型の変数s2に”world!”を代入して、s1とs2を結合した文字列を出力してください。
#文字列型の変数nameに”John”を代入し、文字列型の変数greetingに”Hello”を代入して、
#greetingとnameを結合した文字列を出力してください。

def a():
    s1 = "Hello,"
    s2 = "world!"
    print(s1+s2)

def b():
    name = "John"
    greeting = "Hello"
    print(greeting+name)

if __name__ == "__main__":
    a()
    b()