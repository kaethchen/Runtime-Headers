@class NSString, NSArray;
@protocol MLComputeDeviceProtocol;

@interface CSUSystemSearchTextEncoderV1Configuration : NSObject <CSUCLIPTextEncoderConfiguration>

@property (copy, nonatomic) NSString *vocabularyModelPath;
@property (copy, nonatomic) NSString *tokenEmbeddingNetworkPath;
@property (copy, nonatomic) NSString *textEncoderNetworkPath;
@property (nonatomic) unsigned long long maximumSequenceLength;
@property (nonatomic) unsigned long long tokenEmbeddingLength;
@property (nonatomic) BOOL inputIsLowerCase;
@property (copy, nonatomic) NSString *inputTextIDTensorName;
@property (copy, nonatomic) NSString *outputTokenEmbeddingIDTensorName;
@property (copy, nonatomic) NSString *inputTokenEmbeddingIDTensorName;
@property (copy, nonatomic) NSString *inputTokenEmbeddingMaskTensorName;
@property (copy, nonatomic) NSString *outputTextEmbeddingTensorName;
@property (copy, nonatomic) NSString *outputLastHiddenStateTensorName;
@property int espressoExecutionEngine;
@property (readonly, copy, nonatomic) NSArray *supportedComputeDevices;
@property (retain, nonatomic) id<MLComputeDeviceProtocol> computeDevice;
@property (retain, nonatomic) NSArray *additionalLayerNames;
@property (readonly, nonatomic) long long revision;

+ (id)SystemSearchTextEncoderV1ConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;

- (void).cxx_destruct;
- (id)initSystemSearchTextEncoderV1ConfigurationForRevision:(long long)a0 vocabularyModelPath:(id)a1 tokenEmbeddingNetworkPath:(id)a2 textEncoderNetworkPath:(id)a3 encoderParams:(id)a4;

@end
