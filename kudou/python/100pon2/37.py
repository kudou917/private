# 【問題37】型の確認
# 変数xが文字列型である場合に「xは文字列型です」と出力してください。

def main():
    x = "python"
    if type(x) == str:#type()を使わないと反応しない
        print("xは文字列型です")  # 差集合を出力(前者に重なっていない物の表示)
    return

if __name__ == "__main__":
    main()