def main():
    d = {
    '東京': ['とうきょう', 'Tokyo'],
    '神奈川': ['かながわ', 'Kanagawa'],
    '千葉': ['ちば', 'Chiba'],
    '埼玉': ['さいたま', 'Saitama']
}
    for ja, (yomi, en) in d.items():
        print(ja, yomi, en)
    return

if __name__ == "__main__":
    main()