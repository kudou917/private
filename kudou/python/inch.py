# 練習 ft_to_cm
#f フィート i インチをセンチメートルに変換する関数 
#ft_to_cm(f,i) を定義してください。 ただし、1 フィート = 12 インチ = 30.48 cm としてよい。



def ft_to_cm(f, i):
    return 30.48*f+(30.48/12)*i


if __name__ == "__main__":
    ft_to_cm(3,6)