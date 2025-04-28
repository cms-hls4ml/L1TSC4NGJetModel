TARGET=L1TSC4NGJetModel_v0/NN
mkdir -p $TARGET
SRC=L1TSC4NGJetModel

cp -r $SRC/defines.h ${TARGET}
sed -i .tmp "s/#include <cstdio>/#include <cstdio>\n\nnamespace hls4ml_L1TSC4NGJetModel_v0 {/" ${TARGET}/defines.h
echo '}' >> ${TARGET}/defines.h

cp $SRC/L1TSC4NGJetModel.cpp   ${TARGET}/L1TSC4NGJetModel_v0.cpp
sed -i .tmp "s/void L1TSC4NGJetModel(/namespace hls4ml_L1TSC4NGJetModel_v0 {\nvoid L1TSC4NGJetModel(/" ${TARGET}/L1TSC4NGJetModel_v0.cpp
echo '}' >> ${TARGET}/L1TSC4NGJetModel_v0.cpp

cp    $SRC/L1TSC4NGJetModel.h   ${TARGET}/L1TSC4NGJetModel_v0.h
sed -i .tmp "s/void L1TSC4NGJetModel(/namespace hls4ml_L1TSC4NGJetModel_v0 {\nvoid L1TSC4NGJetModel(/" ${TARGET}/L1TSC4NGJetModel_v0.h
sed -i .tmp "s/#endif/}\n\n#endif/" ${TARGET}/L1TSC4NGJetModel_v0.h

cp -r $SRC/nnet_utils ${TARGET}

cp    $SRC/parameters.h ${TARGET}
sed -i .tmp "s,// hls-fpga-machine-learning insert layer-config,namespace hls4ml_L1TSC4NGJetModel_v0 {\n// hls-fpga-machine-learning insert layer-config," ${TARGET}/parameters.h
sed -i .tmp "s/#endif/}\n\n#endif/" ${TARGET}/parameters.h

cp -r $SRC/weights ${TARGET}
for filename in ${TARGET}/weights/*.h; do
    echo $filename
    sed -i '8 a namespace hls4ml_L1TSC4NGJetModel_v0 {' $filename
    echo '}' >> $filename
done

rm ${TARGET}/weights/*.txt

# change the way the weights are read
find ./${TARGET} \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/#ifndef __SYNTHESIS__/#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__/'
