#【問題45】ラムダ式
# ラムダ式を用いて、リストlistの各要素に対して2倍した値を持つリストを作成してください。

def main():
    list = [1, 2, 3]
    new_list = list(map(lambda x: x * 2, list))  # ラムダ式で各要素に対して2倍した値を持つリストを作成
    print(new_list)  # 2倍した値を持つリストを表示
    return


if __name__ == "__main__":
    main()

# 分からなかった
#　出来ない