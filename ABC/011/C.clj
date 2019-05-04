(defn main []
  (def N (read))
  (def NG (vector (read) (read) (read)))
  (def N
    (if (some #(= N %) NG)
      N
      (nth
        (iterate 
          (fn [N]
            (cond
              (not (some #(= (- N 3) %) NG)) (- N 3)
              (not (some #(= (- N 2) %) NG)) (- N 2)
              (not (some #(= (- N 1) %) NG)) (- N 1)
              :else N
            )
          ) N
        ) 100
      )
    )
  )
  (cond
    (<= N 0) (println "YES")
    (> N 0) (println "NO")
  )
)

(main)
