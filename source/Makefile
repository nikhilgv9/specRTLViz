LEX=flex
YACC=bison
CPP=g++
CFLAGS=-g -rdynamic -O0 -Wall #-DTEST_SCANNER -DYYDEBUG=1
#-DTEST_BACKTRACE

SCANNER=srtl-scanner
PARSER=srtl-parser
TGT=srtl

OBJS=$(SCANNER).o $(PARSER).tab.o srtl.o srtl-driver.o pattern.o abstract.o concrete_pattern.o node.o list.o statTreeNode.o


all : ${OBJS}
	${CPP} ${CFLAGS} -o ${TGT} ${OBJS}   -ll


.PHONY:
parser:	$(PARSER).tab.cc $(SCANNER).cc

$(PARSER).tab.hh : $(PARSER).tab.cc

$(SCANNER).cc : $(SCANNER).ll $(PARSER).tab.hh
	${LEX} -o${SCANNER}.cc $(SCANNER).ll
	sed -i 's/#line.*$$//g' $(SCANNER).cc

$(PARSER).tab.cc : $(PARSER).yy
	${YACC} --report=state -b $(PARSER) -dv $(PARSER).yy
	sed -i 's/#line.*$$//g' $(PARSER).tab.cc


%.o : %.cc
	${CPP} ${CFLAGS} -c $<


.PHONY: clean
clean:
	rm -rf *.o $(PARSER).tab.* $(SCANNER).cc *.output ${TGT} location.hh position.hh stack.hh srtl-output.md *.dot

