import mgetmethod: ((#3 (List (List Char)) (List (#3 Int Int Int)) String)->(Int->(Int->(Int->((List Gcode)->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int)))))))) {# ARITY _ = 7 #}{# STRICTNESS _ = "T,F" ST #};
import mgettag: ((#3 (List (List Char)) (List (#3 Int Int Int)) String)->(Int->(Int->((List Gcode)->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int))))))) {# ARITY _ = 6 #}{# STRICTNESS _ = "T,F" ST #};
import mgetf: (*a->((#3 (List (List Char)) (List (#3 Int Int Int)) String)->(Int->(Int->((List Gcode)->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int)))))))) {# ARITY _ = 7 #}{# STRICTNESS _ = "T,F" ST #};
import mget: ((#3 (List (List Char)) (List (#3 Int Int Int)) String)->(Int->(Int->((List Gcode)->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int))))))) {# ARITY _ = 6 #}{# STRICTNESS _ = "T,F" ST #};