# 【問題21】リスト（forによる捜査, enumerate）
# リストlistを定義し、listの全ての要素と、その要素のインデックスをforループと
# enumerate関数を使って表示してください。

def add():
    list = [1, 2, 3]
    for index, num in enumerate(list):
        print(index, num)  # リストの要素とインデックスを表示
    return

if __name__ == "__main__":
    add()