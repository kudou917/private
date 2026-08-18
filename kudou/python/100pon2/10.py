#【問題10】文字列（format）
# 文字列str1と文字列str2を定義し、str1とstr2を結合した文字列を出力してください。
# ただし、str1には{}を1つ含め、formatメソッドを使って、str2を挿入してください。

def check():
    str2 = "python"
    str1 = "I love{}"
    print(str1.format(str2)) 
    return

if __name__ == "__main__":
    check()