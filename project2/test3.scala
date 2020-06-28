/*
 * Example with Functions
 */

object example {
  // constants
  val a = 5

  // variables
  var c : int

  // function declaration
  def add (a: int, b: int) : int {
    return a+b
  }
  
  // main statements
  def main() {
    c = add(a, 10)
    if (c > 10)
      print -c
    else
      print c
    println ("Hello World")
  }
}