program ABC014_A
  implicit none
  integer, parameter :: PATTERN = 1000005
  integer :: n, a, b, i
  integer :: imos(PATTERN)

  do i = 1, PATTERN
    imos(i) = 0
  end do

  read (*, *) n
  do i = 1, n
    read (*, *) a, b
    imos(a + 1) = imos(a + 1) + 1
    imos(b + 2) = imos(b + 2) - 1
  end do

  ! write (*, *) imos(1:10)
  do i = 2, PATTERN
    imos(i) = imos(i) + imos(i - 1)
  end do
  ! write (*, *) imos(1:10)
  write (*, '(i0)') maxval(imos)
  
end program ABC014_A
