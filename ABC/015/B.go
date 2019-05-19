package main

import "fmt"
import "math"

func main() {
  var N, A, cnt, goukei int
  fmt.Scanln(&N)
  for i := 0; i < N; i ++ {
    fmt.Scan(&A)
    goukei += A
    if A != 0 {
      cnt ++
    }
  }
  fmt.Printf("%d\n", int(math.Ceil(float64(goukei) / float64(cnt))))
}
