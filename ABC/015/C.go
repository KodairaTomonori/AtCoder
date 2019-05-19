package main

import "fmt"

func main() {
  var N, K int
  var T int 
  var memo [5][128]int
  fmt.Scan(&N)
  fmt.Scan(&K)
  for i := 0; i < N; i ++ { 
    for j := 0; j < K; j ++ {
      fmt.Scan(&T)
      if i == 0 {
        memo[i][T] = 1
        continue
      }
      for k := 0; k < 128; k ++ {
        if memo[i - 1][k] == 1 {
          memo[i][(k ^ T)] = 1
        }
      }
    }
  }
  if memo[N-1][0] == 0 {
    fmt.Println("Nothing") 
  } else {
    fmt.Println("Found") 
  }
}
