#英語の文章からなる文字列 str_engsentences が引数として与えられたとき、str_engsentences
# 中に含まれる全ての句読点（., ,, :, ;, !, ?）を削除した文字列を返す関数 
# remove_punctuations を作成してください。
#（練習の解答はこのノートブックの一番最後にあります。）
# 次のセルの ... のところを書き換えて remove_punctuations(str_engsentences) を作成してください。

def remove_punctuations(str_engsentences):
    str1 = str_engsentences
    str1 = str1.replace(".","")
    str1 = str1.replace(",","")
    str1 = str1.replace(":","")
    str1 = str1.replace(";","")
    str1 = str1.replace("!","")
    str1 = str1.replace("?","")
    return str1


if __name__ == "__main__":
    if remove_punctuations('Quiet, uh, donations, you want me to make a donation to the coast guard youth auxiliary?') == 'Quiet uh donations you want me to make a donation to the coast guard youth auxiliary':
        print("True")
    else:
        print("False")
    a = remove_punctuations("Quiet, uh, donations, you want me to make a donation to the coast guard youth auxiliary?")

    print(a)