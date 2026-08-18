#練習
# リスト ln を引数として取り、ln の偶数番目のインデックスの値を削除したリストを返す
# 関数 remove_evenindex を作成してください（ただし、0 は偶数として扱うものとします）。
# ヒント：スライスを使います。
# 以下のセルの ... のところを書き換えて remove_evenindex(ln) を作成してください。
# def remove_evenindex(ln):
# ...
# 上のセルで解答を作成した後、以下のセルを実行し、実行結果が全て True になることを確認してください。
# print(remove_evenindex(['a', 'b', 'c', 'd', 'e', 'f', 'g']) == ['b', 'd', 'f'] )
# print(remove_evenindex([1, 2, 3, 4, 5]) == [2, 4])
# False
# False

def remove_evenindex(ln):
    return ln[1::2]

if __name__ == "__main__":
    if remove_evenindex(['a', 'b', 'c', 'd', 'e', 'f', 'g']) == ['b', 'd', 'f']:
        print("True")
    else:
        print("False")
    if remove_evenindex([1, 2, 3, 4, 5]) == [2, 4]:
        print("True")
    else:
        print("False")