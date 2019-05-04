(require '[clojure.string :as string])

(defn main []
  (def S (string/lower-case (read)))
  (println (str (string/upper-case (get S 0)) (subs S 1)))
)


(main)
