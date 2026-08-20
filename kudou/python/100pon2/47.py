# 【問題47】内包表記
# 0から4までの整数を要素とするリストを内包表記を用いて作成してください。

def main():
    list = []# list = [i for i in range(5)]  # 模範解答
    for i in range(5):
        list.append(i)
    print(list)
    return

if __name__ == "__main__":
    main()

# 見てできた