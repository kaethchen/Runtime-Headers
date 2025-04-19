@class NSString, NSArray;
@protocol MLComputeDeviceProtocol;

@interface CSUImageCaptioningDecoderConfiguration : NSObject {
    int _espressoExecutionEngine;
}

@property (copy, nonatomic) NSString *vocabularyModelPath;
@property (copy, nonatomic) NSString *runTimeParamsPath;
@property (copy, nonatomic) NSString *decoderNetworkPath;
@property (copy, nonatomic) NSString *bridgeNetworkPath;
@property (nonatomic) unsigned long long maxSeqLen;
@property (copy, nonatomic) NSString *inputEncodedFeaturesTensorNameOfBridge;
@property (copy, nonatomic) NSString *outputTensorNameOfBridge;
@property (copy, nonatomic) NSString *inputEncodedFeaturesTensorName;
@property (copy, nonatomic) NSString *inputWordIdsTensorName;
@property (copy, nonatomic) NSString *outputWordProbsTensorName;
@property (nonatomic) BOOL saveDecoderFeatures;
@property (copy, nonatomic) NSArray *bridgeInputShape;
@property (copy, nonatomic) NSArray *decoderEmbeddingShape;
@property (copy, nonatomic) NSArray *decoderInputSeqShape;
@property (nonatomic) BOOL bridgeIsPrecompiled;
@property (nonatomic) BOOL decoderIsPrecompiled;
@property (readonly, copy, nonatomic) NSArray *supportedComputeDevices;
@property (retain, nonatomic) id<MLComputeDeviceProtocol> computeDevice;
@property int espressoExecutionEngine;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) long long runtimeEngine;

+ (id)CSUImageCaptioningDecoderConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (id)CSUImageCaptioningDecoderConfigurationForRevision:(long long)a0 saveDecoderFeatures:(BOOL)a1 error:(id *)a2;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;
+ (id)createCSUImageCaptioningDecoderConfigurationWithConfigPath:(id)a0 error:(id *)a1;
+ (id)createCSUImageCaptioningDecoderConfigurationWithDecoderEspressoPath:(id)a0 decoderNetworkParams:(id)a1 bridgeNetworkPath:(id)a2 bridgeNetworkParams:(id)a3 vocabularyPath:(id)a4 useRuntimeEngine:(long long)a5 runtimeParamsPath:(id)a6 error:(id *)a7;

- (void).cxx_destruct;
- (id)initImageCaptioningDecoderConfigurationForRevision:(long long)a0 runtimeEngine:(long long)a1 espressoNetPath:(id)a2 vocabularyModelPath:(id)a3 inputEncodedFeaturesTensorName:(id)a4 inputWordIdsTensorName:(id)a5 outputWordProbsTensorName:(id)a6 decoderEmbeddingShape:(id)a7 decoderInputSeqShape:(id)a8 decoderIsPrecompiled:(BOOL)a9 saveDecoderFeatures:(BOOL)a10 bridgeNetworkPath:(id)a11 inputEncodedFeaturesTensorNameOfBridge:(id)a12 outputTensorNameOfBridge:(id)a13 bridgeInputShape:(id)a14 bridgeIsPrecompiled:(BOOL)a15 runtimeParamsPath:(id)a16;

@end
