with open("data/0059_cipher.txt", "r") as f:
    cipher = list(map(int, f.read().split(",")))


for a in range(ord('a'), ord('z') + 1):
    for b in range(ord('a'), ord('z') + 1):
        for c in range(ord('a'), ord('z') + 1):

            key = [a, b, c]

            text = ""
            valid = True

            for i in range(len(cipher)):

                value = cipher[i] ^ key[i % 3]
                char = chr(value)

                if 'A' <= char <= 'Z':
                    text += char

                elif 'a' <= char <= 'z':
                    text += char

                elif '0' <= char <= '9':
                    text += char

                elif char == ' ':
                    text += char

                elif char in ".,!?;:'\"[]()+/-":
                    text += char

                else:
                    valid = False
                    break

            if valid:
                print("key:", chr(a), chr(b), chr(c))
                print(text)
                print("sum:", sum(ord(x) for x in text))
                print()