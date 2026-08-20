# リストaに整数型の値20を追加し、リストaとリストbを結合して新しいリストcを作成してください。
# リストxに文字列型の要素”apple”と”banana”を追加し、リストyに文字列型の要素”cherry”を追加し、
# リストxとリストyを結合して新しいリストzを作成してください

def main():
    a = [10,20]
    b = [1,2,3,4,5]
    c = a + b
    print(c)
    return

def sub():
    x = ["apple","banana"]
    y = ["cherry"]
    z = x + y
    print(z)
    return

if __name__ == "__main__":
    main()
    sub()