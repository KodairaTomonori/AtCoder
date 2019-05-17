program ABC014_A

   implicit none
   integer :: a, b, result, amari
   read (*, *) a
   read (*, *) b
   amari = mod(a, b) 
   print '(i0)', mod(b - amari, b)
end program ABC014_A
