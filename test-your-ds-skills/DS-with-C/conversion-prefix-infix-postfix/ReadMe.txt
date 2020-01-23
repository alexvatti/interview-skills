
Infix, Postfix and Prefix notations are three different but equivalent ways of writing expressions. 
It is easiest to demonstrate the differences by looking at examples of operators that take two operands.

Infix notation: X + Y
    Operators are written in-between their operands.

Postfix notation (also known as "Reverse Polish notation"): X Y +
    Operators are written after their operands

Prefix notation (also known as "Polish notation"): + X Y
    Operators are written before their operands.



The most straightforward method is to start by inserting all the implicit brackets that show the order of evaluation e.g.:
Infix			Postfix			Prefix
( (A * B) + (C / D) ) 	( (A B *) (C D /) +) 	(+ (* A B) (/ C D) )
((A * (B + C) ) / D) 	( (A (B C +) *) D /) 	(/ (* A (+ B C) ) D)
(A * (B + (C / D) ) ) 	(A (B (C D /) +) *) 	(* A (+ B (/ C D) ) )
