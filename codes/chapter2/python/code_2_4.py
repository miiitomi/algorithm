def calc_dist(x1, y1, x2, y2):
    return ((x1 - x2)**2 + (y1 - y2)**2)**0.5

def main():
    N = int(input())
    x, y = [0.0]*N, [0.0]*N
    for i in range(N):
        x[i], y[i] = map(float, input().split())
    
    minimum_dist = 100000000.0

    for i in range(N):
        for j in range(i+1, N):
            dist_i_j = calc_dist(x[i], y[i], x[j], y[j])
            if dist_i_j < minimum_dist:
                minimum_dist = dist_i_j
    print(minimum_dist)

if __name__ == '__main__':
    main()