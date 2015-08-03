# makefile for Drachma:
# a Reconfigurable Computing Cache Replacement Simulator
# written by James B. Nall

# Copyright (C) 2015, All Rights Reserved

drachma: src/main.cpp src/wallet.h src/fileHandler.h src/fileHandler.cpp src/wallet.cpp src/device.h src/device.cpp src/storageUnit.h src/storageUnit.cpp src/replAlg.h src/module.h src/module.cpp src/algs/randomAlg.h src/algs/randomAlg.cpp src/algs/fifoAlg.h src/algs/fifoAlg.cpp
	g++ -std=c++11  -o drachma src/main.cpp src/wallet.h src/wallet.cpp src/fileHandler.h src/fileHandler.cpp src/device.h src/device.cpp src/storageUnit.h src/storageUnit.cpp src/replAlg.h src/module.h src/module.cpp src/algs/randomAlg.h src/algs/randomAlg.cpp src/algs/fifoAlg.h src/algs/fifoAlg.cpp -lboost_regex