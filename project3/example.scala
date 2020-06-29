/* fib.scala
 *
 * This test program computes the Nth Fibonacci number
 */

object fib
{
  // variables
  var n: int = 8
  var Fn: int = 1
  var FNminus1: int = 1
  var temp: int
  var t: boolean = true

  def main () {
    // compute the nth Fibonacci number
    while (n > 2) {
      temp = Fn
      print("temp: ")
      println(Fn)
      Fn = Fn + FNminus1
      print("FN: ")
      println(Fn)
      FNminus1 = temp
      print("FNminus1: ")
      println(FNminus1)
      if(t)
        n = n - 1

    }
    
    // print result
    print ("Result of computation: ")
    println (n)
  }
}