# 問題 49 エラー処理
# 変数 x に None を代入してください。
# 変数 x の値を 2 倍した値を print 関数で出力してください。
# ただし、try と except を使って型エラー TypeError を検知し、
# エラーが発生した場合はエラー内容を出力してください。

def main():
    x = None
    try:
        print(2 * x)
    except TypeError as e:#except 句で as キーワードを使用すると、発生したエラーの情報を取得することができます。
        print(e)


if __name__ == "__main__":
    main()