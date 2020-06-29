/* Sigma.scala
 *
 * Compute sum = 1 + 2 + ... + n
 */

object sigma
{
  // constants and variables
  //val n = 10
  //val str = "sadasd"
  var sum: int
  var index: int = 0


  def fib(n:int):int {
    if(n<2)
      return n
    else
      return fib(n-1) + fib(n-2)
  }

  def main () {
    i = 0
    while(index < 10)
      println(fib(i))
      index = index +1
    }
  
  }
}