# 【問題29】辞書（キーの存在確認）
# 辞書dictに「apple」というキーが含まれる場合に「appleが含まれます」と出力してください。

def main():
    dict = {'apple': 'りんご', 'orange': 'みかん', 'banana': 'バナナ'}
    if "apple" in dict:
        print("appleが含まれます")  # キーを出力
    return

if __name__ == "__main__":
    main()