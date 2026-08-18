#問題6: if，比較演算子<, >
#整数型の変数xとyにそれぞれ10と20を代入して、xがyより小さい場合は”x is less than y”、
# xがyより大きい場合は”x is greater than y”、xとyが等しい場合は”x equals y”と出力してください。
#整数型の変数aとbにそれぞれ15と30を代入して、aがbより小さい場合は”a is less than b”、
# aがbより大きい場合は”a is greater than b”、aとbが等しい場合は”a equals b”と出力してください。

def con1():
    x = 10
    y = 20
    if x > y:
        print("x is greater than y")
    elif x == y:
        print("x equals y")
    else:
        print("y is greater than x")

def con2():
    a = 15
    b = 30
    if a > b:
        print("a is greater than b")
    elif a == b:
        print("a equals b")
    else:
        print("b is greater than a")

if __name__ == "__main__":
    con1()
    con2()