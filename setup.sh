MODEL_VERSION=$1
WRAPPER_VERSION=$2
TARGET=L1TSC4NGJetModel_$WRAPPER_VERSION/NN
mkdir -p $TARGET
SRC=firmware

cp -r $SRC/defines.h ${TARGET}
sed -i '/#include <tuple>/d' ${TARGET}/defines.h

cp $SRC/L1TSC4NGJetModel.cpp   ${TARGET}/L1TSC4NGJetModel_$MODEL_VERSION.cpp
sed -i "s/void L1TSC4NGJetModel(/void L1TSC4NGJetModel_$MODEL_VERSION(/" ${TARGET}/L1TSC4NGJetModel_$MODEL_VERSION.cpp
sed -i "s/L1TSC4NGJetModel.h/L1TSC4NGJetModel_$MODEL_VERSION.h/" ${TARGET}/L1TSC4NGJetModel_$MODEL_VERSION.cpp

cp    $SRC/L1TSC4NGJetModel.h   ${TARGET}/L1TSC4NGJetModel_$MODEL_VERSION.h
sed -i "s/L1TSC4NGJetModel/L1TSC4NGJetModel_$MODEL_VERSION/" ${TARGET}/L1TSC4NGJetModel_$MODEL_VERSION.h
sed -i "s/L1TSC4NGJETMODEL_H_/L1TSC4NGJETMODEL_${MODEL_VERSION}_H_/" ${TARGET}/L1TSC4NGJetModel_$MODEL_VERSION.h

cp -r $SRC/nnet_utils ${TARGET}

cp    $SRC/parameters.h ${TARGET}

cp ${TARGET}/../L1TSC4NGJetModel_emulator_$WRAPPER_VERSION.cpp ${TARGET}/../L1TSC4NGJetModel_emulator_$MODEL_VERSION.cpp
sed -i "s/${WRAPPER_VERSION}/${MODEL_VERSION}/" ${TARGET}/../L1TSC4NGJetModel_emulator_$MODEL_VERSION.cpp

sed -i "s/L1TSC4NGJetModel_$WRAPPER_VERSION.o/L1TSC4NGJetModel_$MODEL_VERSION.o/" ${TARGET}/../Makefile
sed -i "s/L1TSC4NGJetModel_$WRAPPER_VERSION.so/L1TSC4NGJetModel_$MODEL_VERSION.so/" ${TARGET}/../Makefile
sed -i "s/L1TSC4NGJetModel_emulator_$WRAPPER_VERSION.o/L1TSC4NGJetModel_emulator_$MODEL_VERSION.o/" ${TARGET}/../Makefile
sed -i "s,L1TSC4NGJetModel_$WRAPPER_VERSION/L1TSC4NGJetModel_$WRAPPER_VERSION.so,L1TSC4NGJetModel_$MODEL_VERSION/L1TSC4NGJetModel_$MODEL_VERSION.so," ${TARGET}/../../Makefile

cp -r $SRC/weights ${TARGET}

rm ${TARGET}/weights/*.txt

# change the way the weights are read
find ./${TARGET} \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/#ifndef __SYNTHESIS__/#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__/'

# change the way the weights are read
find ./${TARGET} \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/#ifndef __SYNTHESIS__/#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__/'

cp -r L1TSC4NGJetModel_$WRAPPER_VERSION L1TSC4NGJetModel_$MODEL_VERSION

#rm -r $SRC
