# 【問題35】和集合
# 集合set1と集合set2を定義し、set1とset2の和集合を出力してください。

def main():
    set1 = {1, 2, 3}
    set2 = {2, 3, 4}
    print(set1 | set2)  # 積集合を出力(重なっている物の表示)
    return

if __name__ == "__main__":
    main()

# 見てできた