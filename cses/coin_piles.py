
def solve(A, B):
    if (2 * A - B) % 3 != 0 or (2 * A - B) < 0 \
            or (2 * B - A) % 3 != 0 or (2 * B - A) < 0:
        return "NO"
    return "YES"

n = int(input())
for i in range(n):
    b = input().split()
    print(solve(int(b[0]),int(b[1])))