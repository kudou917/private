def main():
    d = {
    '東京': ['とうきょう', 'Tokyo'],
    '神奈川': ['かながわ', 'Kanagawa'],
    '千葉': ['ちば', 'Chiba'],
    '埼玉': ['さいたま', 'Saitama']}
    fo = open("prefecture.txt", "w")
    for ja, (yomi, en) in d.items():
        print(ja, yomi, en, file=fo)
    fo.close()

if __name__ == "__main__":
    main()