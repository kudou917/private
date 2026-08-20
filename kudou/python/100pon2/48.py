# 【問題48】例外処理
# 変数aと変数bを入力値として受け取り、a / bの計算結果を表示してください。
# ただし、bが0である場合には「0で割ることはできません」と表示してください。

def main():
    a = int(input())
    b = int(input())
    try:
        result = a / b
        print(result)
    except ZeroDivisionError:
        print('0で割ることはできません')

if __name__ == "__main__":
    main()

# 出来ない