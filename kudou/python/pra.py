#練習
# ATGCの4種類の文字から成る文字列 str_atgc が引数として与えられたとき、
# 文字列 str_pair を返す関数 atgc_bppair を作成してください。
# ただし、str_pair は、str_atgc 中の各文字列に対して、 A を T に、T を A に、G を C に、C を G に
# 置き換えたものです。
# 次のセルの ... のところを書き換えて atgc_bppair(str_atgc) を作成してください。
# def atgc_bppair(str_atgc):    ...
# 上のセルで解答を作成した後、以下のセルを実行し、実行結果が True になることを確認してください。
# print(atgc_bppair('AAGCCCCATGGTAA') == 'TTCGGGGTACCATT')
# False

def atgc_bppair(str_atgc):
    str_pair = str_atgc
    str_pair = str_pair.replace("A","t")
    str_pair = str_pair.replace("T","a")
    str_pair = str_pair.replace("G","c")
    str_pair = str_pair.replace("C","g")
    str_pair = str_pair.upper()

    return str_pair

if __name__ == "__main__":
    if atgc_bppair("AAGCCCCATGGTAA") == "TTCGGGGTACCATT":
        print("True")
    else:
        print("False")
    print(atgc_bppair("AAGCCCCATGGTAA"))
