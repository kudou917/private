import tkinter as tk


def main():
    # 1. メインウィンドウの作成
    root = tk.Tk()
    root.title("初めてのアプリ")  # ウィンドウのタイトル
    root.geometry("400x300")  # ウィンドウのサイズ (幅x高さ)

    # 2. テキスト（ラベル）の作成と配置
    # text: 表示する文字, font: フォントの種類とサイズ
    label = tk.Label(root, text="Hello World!", font=("Helvetica", 24))

    # pack()でウィンドウの中央に配置します (padyは縦方向の余白)
    label.pack(expand=True)

    # 3. ウィンドウの表示（メインループの開始）
    root.mainloop()


if __name__ == "__main__":
    main()