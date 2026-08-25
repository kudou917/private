
def main():
    x = 1
    print(id(x))
    x += 1
    print(id(x))# アドレス位置が32動く
    x = 0
    print(id(x))# アドレスが64下に下がる
    y = x
    print(id(y))# xと同じアドレス
    if x is y:
        print("True")# xとyはアドレスも値も同じ
    y += 1
    if x is y:
        print("True")# xとyはアドレスも値も異なる
    else:
        print("False")

if __name__ == "__main__":
    main()