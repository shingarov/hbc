import prpragma: (Pragma->(List Char)) {# ARITY _ = 1 #}{# STRICTNESS _ = "0,F" ST #};
import prmkimport: (Import->(List Char)) {# ARITY _ = 1 #}{# STRICTNESS _ = "0,F" ST #};
import prgram: ((List (Ttype # (List (*a # Prod))))->(List Char)) {# ARITY _ = 1 #}{# STRICTNESS _ = "0,F" ST #};
import prps: ((List (Ttype # (Int # Asstype)))->(List Char)) {# ARITY _ = 1 #}{# STRICTNESS _ = "0,F" ST #};
import prcgs: (*a->(Cgs->(List Char))) {# ARITY _ = 2 #}{# STRICTNESS _ = "1,F" ST #};
import prass: (Asstype->String) {# ARITY _ = 1 #}{# STRICTNESS _ = "0,0" ST #};
import prprod: (*a->(Prod->(List Char))) {# ARITY _ = 2 #}{# STRICTNESS _ = "1,F" ST #};
import prderiv: ((Option (List Id))->(List Char)) {# ARITY _ = 1 #}{# STRICTNESS _ = "0,F" ST #};
import prdefg: (Int->(Binding->(List Char))) {# ARITY _ = 2 #}{# STRICTNESS _ = "1,F" ST #};
import ppr: (Texpr->(List Char)) {# ARITY _ = 1 #}{# STRICTNESS _ = "0,F" ST #};