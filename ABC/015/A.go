package main

import "fmt"

func main() {
  var A, B string
  fmt.Scanln(&A)
  fmt.Scanln(&B)
  if len(A) > len(B) {
    fmt.Println(A)
  } else {
    fmt.Println(B)
  }
}
