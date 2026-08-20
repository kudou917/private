# 文字列型の変数messageに”Good morning, John!”を代入し、”John”を”Jane”に置換して、
# 置換後の文字列を出力してください。
# 文字列型の変数sに”apple, banana, cherry”を代入し、”banana”を”orange”に置換して、
# 置換後の文字列を出力してください。

def main():
    message = "Good morning, John!"
    print(message.replace("John", "Jane"))
    return

def sub():
    name = "apple, banana, cherry"
    print(name.replace("banana", "orange"))
    return

if __name__ == "__main__":
    main()
    sub()