object fib
{
  // variables
  var n: int = 8
  var Fn: int = 1
  var FNminus1: int = 1
  var temp: boolean = true
  val s  = "Result of computation: "

  def main () {
    // compute the nth Fibonacci number

    while (n > 2) {
      Fn = 100 - n
      if(temp == temp)
        println -Fn
      else
        println Fn
      n = n - 1
    }
    // print result
    print s
    println (n)
  }
}