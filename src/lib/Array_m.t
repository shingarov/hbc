import Pfail_out_of_range: *a {# ARITY _ = 0 #}{# STRICTNESS _ = "T,F" ST #};
import Pfail_multiple_index: *a {# ARITY _ = 0 #}{# STRICTNESS _ = "T,F" ST #};
import Pfail_undefined_elem: *a {# ARITY _ = 0 #}{# STRICTNESS _ = "T,F" ST #};
import Pfail_index_too_big: (_Int->(_Int->(_Int->*a))) {# ARITY _ = 3 #}{# STRICTNESS _ = "T,F" ST #};
import Pfail_index_too_small: (_Int->(_Int->(_Int->*a))) {# ARITY _ = 3 #}{# STRICTNESS _ = "T,F" ST #};
import Pfail_funny_bounds: (_Int->(_Int->*a)) {# ARITY _ = 2 #}{# STRICTNESS _ = "T,F" ST #};
import _upperbound: ((_LArray *a)->_Int) {# ARITY _ = 1 #}{# STRICTNESS _ = "0,F" ST #};
import _lowerbound: ((_LArray *a)->_Int) {# ARITY _ = 1 #}{# STRICTNESS _ = "0,F" ST #};
import _sarray: (_Int->(_Int->(_Int->((_List (_Int # *a))->(_LArray *b))))) {# ARITY _ = 4 #}{# STRICTNESS _ = "0&1&2&3,F" ST #};
import _array: (_Int->(_Int->(((_List *a)->*b)->((_List (_Int # *a))->(_LArray *b))))) {# ARITY _ = 4 #}{# STRICTNESS _ = "0&1,F" ST #};