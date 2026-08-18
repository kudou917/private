#練習
# ATGCの4種類の文字から成る文字列 str_atgc と塩基名（A, T, G, C のいずれか）を指定する文字列 str_bpname が
# 引数として与えられたとき、str_atgc 中に含まれる塩基 str_bpname の数を返す関数 atgc_count 
# を作成してください。
# 次のセルの ... のところを書き換えて atgc_count(str_atgc, str_bpname) を作成してください。
# def atgc_count(str_atgc, str_bpname):...
# 上のセルで解答を作成した後、以下のセルを実行し、実行結果が True になることを確認してください。
# print(atgc_count('AAGCCCCATGGTAA', 'A') == 5)
# False

def atgc_count(str_atgc, str_bpname):
    str = str_atgc
    return str.count(str_bpname)

if __name__ == "__main__":
    if atgc_count('AAGCCCCATGGTAA', 'A') == 5:
        print("True")
    else:
        print("False")