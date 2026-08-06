#練習
# コンマ (,) を含む英語の文章からなる文字列 str_engsentences 
# が引数として与えられたとき、str_engsentences
# 中の一番最初のコンマより後の文章のみかならなる文字列 str_res を返す関数 remove_clause 
# を作成してください。ただし、 str_res の先頭は大文字のアルファベットとしてください。
# 次のセルの ... のところを書き換えて remove_clause(str_engsentences) を作成してください。
# def remove_clause(str_engsentences):
# ...
# 上のセルで解答を作成した後、以下のセルを実行し、実行結果が True になることを確認してください。
# print(remove_clause("It's being seen, but you aren't observing.") == "But you aren't observing.")
# False

def remove_clause(str_engsentences):
    str1 = str_engsentences
    num = str_engsentences.find(",")
    str2 = str1[num+2:]
    str2 = str2.capitalize()
    print(str2)
    return str2

#    int_index = str_engsentences.find(',')
#   str1 = str_engsentences[int_index+2:]
#  return str1.capitalize()
#remove_clause("It's being seen, but you aren't observing.")

if __name__ == "__main__":
    if remove_clause("It's being seen, but you aren't observing.") == "But you aren't observing.":
        print("True")
    else:
        print("False")