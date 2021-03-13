## 2.1
$T_1(N) = 1000N = O(N)$.  
$T_2(N) = 5N^2 + 10^N + 7 = O(N^2)$.  
$T_3(N) = 4N^2 + 3N\sqrt{N} = O(N^2)$.  
$T_4(N) = N\sqrt{N} + 5N\log N = O(N\sqrt{N})$.  
$T_5(N) = 2^N + N^{2019} = O(2^N)$.  

## 2.2 
$O(N^3)$.

## 2.3
$O(\sqrt{N})$.

## 2.4
省略.

## 2.5
省略.

## 2.6
任意の$N \ge 1$に対して,  
\[ O(\log N) = \log(N+1) = \int_{0}^{N}\frac{1}{x+1}dx < 1 + \frac{1}{2} + \dots \frac{1}{N} \le 1 + \int_{1}^{N}\frac{1}{x}dx = 1 + \log N = O(\log N) \]  
より成り立つ.
