
def main():
    x = [1]
    print(id(x))
    x += [1]
    print(x)
    print(id(x))# 変わらない

if __name__ == "__main__":
    main()