#【問題2】swap
# 変数xに10、変数yに20の値を代入してください。そして、xとyの値を交換してください。

def swap():
    x = 10
    y = 20
    x, y = y, x
    print(x)
    print(y)
    return

if __name__ == "__main__":
    swap()