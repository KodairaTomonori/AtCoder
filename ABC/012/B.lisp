(defvar N (read))
(defvar s (mod N 60))
(defvar r (floor N 60))
(defvar m (mod r 60))
(defvar h (floor r 60))
(format t "~2,'0d:~2,'0d:~2,'0d~%" h m s) 
