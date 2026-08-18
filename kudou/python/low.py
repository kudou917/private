#練習
# 英語の文字列 str_engsentences が引数として与えられたとき、それが全て小文字である場合、
# True を返し、そうでない場合、 False を返す関数 check_lower を作成してください。
# 次のセルの ... のところを書き換えて check_lower(str_engsentences) を作成してください。
# def check_lower(str_engsentences):...
# 上のセルで解答を作成した後、以下のセルを実行し、実行結果が全て True になることを確認してください。
# print(check_lower('down down down') == True)
# print(check_lower('There were doors all round the hall, but they were all locked') == False)
# False
# False

def check_lower(str_engsentences):
    str1 = str_engsentences
    str2 = str_engsentences.lower()
    if str1 == str2:
        return True
    else:
        return False


if __name__ == "__main__":
    if check_lower('down down down') == True:
        print("True")
    else:
        print("False")
    if check_lower('There were doors all round the hall, but they were all locked') == False:
        print("True")
    else:
        print("False")