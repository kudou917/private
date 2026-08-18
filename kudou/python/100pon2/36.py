# 【問題36】差集合
# 集合set1と集合set2を定義し、set1とset2の差集合を出力してください。

def main():
    set1 = {1, 2, 3}
    set2 = {2, 3, 4}
    print(set2 - set1)  # 差集合を出力(前者に重なっていない物の表示)
    return

if __name__ == "__main__":
    main()