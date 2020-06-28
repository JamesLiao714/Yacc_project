/* Sigma.scala
 *
 * Compute sum = 1 + 2 + ... + n
 */

object Sigma
{
  // constants and variables
  val n = 10
  var sum: int
  var index: int

  def main () {
    sum = 0
    index = 0
    
    while (index <= n) {
      sum = sum + index
      index = index + 1
    }
    print ("The sum is ")
    println (sum)
  }
}