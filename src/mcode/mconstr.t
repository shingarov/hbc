import mmvector: (*a->(*b->(*c->(*d->(*e->(*f->(*g->(*h->*i)))))))) {# ARITY _ = 8 #}{# STRICTNESS _ = "T,F" ST #};
import mcinteger: ((#3 (List (List Char)) (List (#3 Int Int Int)) (List Char))->(Int->(Int->((List Gcode)->((List Char)->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int)))))))) {# ARITY _ = 7 #}{# STRICTNESS _ = "T,F" ST #};
import mcfloat: (Bool->((#3 (List (List Char)) (List (#3 Int Int Int)) (List Char))->(Int->(Int->((List Gcode)->(String->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int))))))))) {# ARITY _ = 8 #}{# STRICTNESS _ = "T,F" ST #};
import mcvek: ((#3 (List (List Char)) (List (#3 Int Int Int)) (List Char))->(((List Char) # (List Char))->(Int->((List Gcode)->(Int->(Addrmode->(Addrmode->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int)))))))))) {# ARITY _ = 9 #}{# STRICTNESS _ = "T,F" ST #};
import mctag: ((#3 (List (List Char)) (List (#3 Int Int Int)) (List Char))->(((List Char) # (List Char))->(Int->((List Gcode)->(Int->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int)))))))) {# ARITY _ = 7 #}{# STRICTNESS _ = "T,F" ST #};
import mcstring: ((#3 (List (List Char)) (List (#3 Int Int Int)) (List Char))->(Int->(Int->((List Gcode)->((List Char)->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int)))))))) {# ARITY _ = 7 #}{# STRICTNESS _ = "T,F" ST #};
import mcpair: ((#3 (List (List Char)) (List (#3 Int Int Int)) (List Char))->(((List Char) # (List Char))->(Int->(Addrmode->((List Gcode)->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int)))))))) {# ARITY _ = 7 #}{# STRICTNESS _ = "T,F" ST #};
import mcnil: ((#3 (List (List Char)) (List (#3 Int Int Int)) (List Char))->(((List Char) # (List Char))->(Int->(Int->((List Gcode)->(Int->((List Addrmode)->((List Addrmode)->(#5 (List Mcode) (List (List Char)) (List Wuseinfo) (List Wuseinfo) Int))))))))) {# ARITY _ = 8 #}{# STRICTNESS _ = "T,F" ST #};