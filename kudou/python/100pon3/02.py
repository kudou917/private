# 2つの整数型変数xとyにそれぞれ10と20を代入して、xとyの値を交換してください。
# 2つの文字列型変数name1とname2にそれぞれ”John”と”Jane”を代入して、
# name1とname2の値を交換してください。

def main():
    x = 10
    y = 20
    name1 = "John"
    name2 = "Jane"
    x, y = y, x
    name1, name2 = name2, name1
    print(x)
    print(y)
    print(name1)
    print(name2)
    return

if __name__ == "__main__":
    main()