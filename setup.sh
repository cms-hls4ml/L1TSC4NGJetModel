VERSION=$1
TARGET=L1TSC4NGJetModel/NN
mkdir -p $TARGET
SRC=firmware

cp -r $SRC/defines.h ${TARGET}
sed -i "s/#include <cstdio>/#include <cstdio>\n\nnamespace hls4ml_L1TSC4NGJetModel_$VERSION {/" ${TARGET}/defines.h
echo '}' >> ${TARGET}/defines.h

cp $SRC/L1TSC4NGJetModel.cpp   ${TARGET}/L1TSC4NGJetModel_$VERSION.cpp
sed -i "s/void L1TSC4NGJetModel(/void L1TSC4NGJetModel_$VERSION(/" ${TARGET}/L1TSC4NGJetModel_$VERSION.cpp
sed -i "s/void L1TSC4NGJetModel_${VERSION}(/namespace hls4ml_L1TSC4NGJetModel_$VERSION {\nvoid L1TSC4NGJetModel_$VERSION(/" ${TARGET}/L1TSC4NGJetModel_$VERSION.cpp
echo '}' >> ${TARGET}/L1TSC4NGJetModel_$VERSION.cpp
sed -i "s/L1TSC4NGJetModel.h/L1TSC4NGJetModel_$VERSION.h/" ${TARGET}/L1TSC4NGJetModel_$VERSION.cpp

cp    $SRC/L1TSC4NGJetModel.h   ${TARGET}/L1TSC4NGJetModel_$VERSION.h
sed -i "s/L1TSC4NGJetModel/L1TSC4NGJetModel_$VERSION/" ${TARGET}/L1TSC4NGJetModel_$VERSION.h
sed -i "s/void L1TSC4NGJetModel_${VERSION}(/namespace hls4ml_L1TSC4NGJetModel_$VERSION {\nvoid L1TSC4NGJetModel_$VERSION(/" ${TARGET}/L1TSC4NGJetModel_$VERSION.h
sed -i "s/#endif/}\n\n#endif/" ${TARGET}/L1TSC4NGJetModel_$VERSION.h
sed -i "s/L1TSC4NGJETMODEL_H_/L1TSC4NGJETMODEL_${VERSION}_H_/" ${TARGET}/L1TSC4NGJetModel_$VERSION.h

cp -r $SRC/nnet_utils ${TARGET}

cp    $SRC/parameters.h ${TARGET}
sed -i "s,// hls-fpga-machine-learning insert layer-config,namespace hls4ml_L1TSC4NGJetModel_$VERSION {\n// hls-fpga-machine-learning insert layer-config," ${TARGET}/parameters.h
sed -i "s/#endif/}\n\n#endif/" ${TARGET}/parameters.h

mv ${TARGET}/../L1TSC4NGJetModel_emulator.cpp ${TARGET}/../L1TSC4NGJetModel_emulator_$VERSION.cpp
sed -i "s/L1TSC4NGJetModel.h/L1TSC4NGJetModel_$VERSION.h/" ${TARGET}/../L1TSC4NGJetModel_emulator_$VERSION.cpp
sed -i "s/hls4ml_L1TSC4NGJetModel/hls4ml_L1TSC4NGJetModel_$VERSION/" ${TARGET}/../L1TSC4NGJetModel_emulator_$VERSION.cpp
sed -i "s/L1TSC4NGJetModel(/L1TSC4NGJetModel_$VERSION(/" ${TARGET}/../L1TSC4NGJetModel_emulator_$VERSION.cpp

sed -i "s/L1TSC4NGJetModel.o/L1TSC4NGJetModel_$VERSION.o/" ${TARGET}/../Makefile
sed -i "s/L1TSC4NGJetModel.so/L1TSC4NGJetModel_$VERSION.so/" ${TARGET}/../Makefile
sed -i "s/L1TSC4NGJetModel_emulator.o/L1TSC4NGJetModel_emulator_$VERSION.o/" ${TARGET}/../Makefile
sed -i "s,ALL_VERSIONS:=L1TSC4NGJetModel/L1TSC4NGJetModel.so,ALL_VERSIONS:=L1TSC4NGJetModel_$VERSION/L1TSC4NGJetModel_$VERSION.so," ${TARGET}/../../Makefile

cp -r $SRC/weights ${TARGET}
for filename in ${TARGET}/weights/*.h; do
    echo $filename
    sed -i "8 a namespace hls4ml_L1TSC4NGJetModel_$VERSION {" $filename
    echo '}' >> $filename
done

rm ${TARGET}/weights/*.txt

# change the way the weights are read
find ./${TARGET} \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/#ifndef __SYNTHESIS__/#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__/'

# change the way the weights are read
find ./${TARGET} \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/#ifndef __SYNTHESIS__/#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__/'

mv L1TSC4NGJetModel L1TSC4NGJetModel_$VERSION

rm -r $SRC
