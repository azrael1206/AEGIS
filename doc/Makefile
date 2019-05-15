FILE		= './src/main'
JOBNAME 	= 'Paper'
OUTPUT_FILE = 'Paper'

# Define LaTax building engine
ENGINE	= latexmk

# Define LaTax building engine
PDF		= -pdf
PS		= -ps
BIBTEX	= -bibtex
XELATEX = -xelatex

# Exec command
LATEXMK_OPT	= -outdir=build $(XELATEX) -jobname=$(JOBNAME) $(PDF) $(BIBTEX)
# LATEXMK_OPT	= -outdir=build -jobname=$(JOBNAME) $(PDF) $(BIBTEX)

.PHONY: all latex clean

all: clean latex

latex:
	@if [ ! -d "./build" ]; then \
	echo "build Folder does not exist";  \
	mkdir build; \
	fi
	$(ENGINE) $(LATEXMK_OPT) ${FILE}.tex
	mv ./build/$(JOBNAME).pdf ./$(OUTPUT_FILE).pdf


clean:
	rm -rf build/*
	rm -f $(OUTPUT_FILE).pdf
