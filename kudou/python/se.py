#練習
# コロン (:) を1つだけ含む文字列 str1 を引数として与えると、
# コロンの左右に存在する文字列を入れ替えた文字列を返す関数 swap_colon(str1) を作成してください。
# 次のセルの ... のところを書き換えて swap_colon(str1) を作成してください。
# def swap_colon(str1):...
# 上のセルで解答を作成した後、以下のセルを実行し、実行結果が True になることを確認してください。
# print(swap_colon('hello:world') == 'world:hello')
# False

def swap_colon(str1):
    #コロンの位置を取得する # findでもOK
    col_index = str1.index(':')
    #コロンの位置を基準に前半と後半の部分文字列を取得する
    str2, str3 = str1[:col_index], str1[col_index+1:]
    #部分文字列の順序を入れ替えて結合する
    str4 = str3 + ':' + str2
    return str4
#swap_colon('hello:world')


if __name__ == "__main__":
    if swap_colon('hello:world') == 'world:hello':
        print("True")
    else:
        print("False")