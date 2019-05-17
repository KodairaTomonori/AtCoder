program ABC014_B
  implicit none
  integer :: n, X, tmp, i, ans, start
  integer, allocatable :: a(:)
  character(len=32) :: BX

  read (*, *) n, X

  allocate(a(n))
  read (*, *) a
  write (BX, fmt='(B0)') X
  start = n - len_trim(BX)


  ans = 0
  do i = start+1, n
    ! write(*, *) i, BX(i-start:i-start), a(n-i+1)
    if (BX(i-start:i-start) == '1') then
      ans = ans + a(n-i+1)
    end if 
  end do
  deallocate(a)
  write (*, '(i0)') ans
end program ABC014_B
