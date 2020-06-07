object axottest{

 val True = true

 var ba = true
 var bb:float = 9.333

 val False = false
 var fabtable: int[100]

 def correct(s:string, c: char, i: int, b:boolean, test:int) : string
 {
  while (b){
   i = i + 1
   i = i - 1
   if(i < 5){
    i = i / 1
    i = i * 1
   }
}
  
  for(i <- 5 to 10){
   b = true
   if(i <= 9)
    i = 5
  }
  return s
 }

 
 {
  if(fabtable[n] != -1)
  {
   return fabtable[n]
  }

  if(n < 2)
  { 
   fabtable[n] = n 
  }
  else{
   fabtable[n] = fab(n-1) + fab(n-2)
  }
  return fabtable[n]
 }

 
 def main()
 {
    var ai = 5
 var ib:int
 var ca = 'c'
 var sa = "is a string"
    def fab(n: int) : int
  var i = 0
  for(i <- 0 to 99)
   fabtable[i] = -1

  sa = correct(sa, ca, ia, ba, ib)

  print(fab(50))
 }


}