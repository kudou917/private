#問題2: swap
#2つの整数型変数xとyにそれぞれ10と20を代入して、xとyの値を交換してください。
#2つの文字列型変数name1とname2にそれぞれ”John”と”Jane”を代入して、name1とname2の値を交換してください。

def swap1():
    x=10
    y=20
    x,y=y,x
    print(x)
    print(y)

def swap2():
    name1 = "John"
    name2 = "Jane"
    name1,name2 = name2,name1
    print(name1)
    print(name2)



if __name__ == "__main__":
    swap1()
    swap2()