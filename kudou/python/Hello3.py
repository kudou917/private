"""
引数をもつ関数の定義の例
単独のスクリプトして実行された時には、標準のモジュールgetpassを使ってユーザの名前を取り出して使う。
"""
def HelloTo(name:str)->bool:
    """
    引数nameに与えられた名前の文字列を使って、グリーティング メッセージを端末に表示する。
    """
    print("Hello {}!".format(name))
    print("Welcome to the Python world!!")
    return True

import getpass # getpass モジュールを import = モジュールの提供する関数などを使えるようにする。

def main():
    username=getpass.getuser() # getpassモジュールのgetuser()関数を使って、usernameを取得する。
    HelloTo(username)

if __name__ == "__main__":
    HelloTo("kudo")
    main()