@class NSString, NSArray;
@protocol MLComputeDeviceProtocol;

@interface CSUVisualGenerationTextEncoderV1Configuration : NSObject <CSUCLIPTextEncoderConfiguration>

@property (readonly, copy, nonatomic) NSString *vocabularyModelPath;
@property (readonly, copy, nonatomic) NSString *tokenEmbeddingNetworkPath;
@property (readonly, copy, nonatomic) NSString *textEncoderNetworkPath;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) unsigned long long maximumSequenceLength;
@property (readonly, nonatomic) unsigned long long tokenEmbeddingLength;
@property (readonly, nonatomic) BOOL inputIsLowerCase;
@property (readonly, copy, nonatomic) NSString *inputTextIDTensorName;
@property (readonly, copy, nonatomic) NSString *outputLastHiddenState;
@property (readonly, copy, nonatomic) NSString *outputCLIPPooledLayer;
@property (readonly) int espressoExecutionEngine;
@property (readonly, copy, nonatomic) NSArray *supportedComputeDevices;
@property (retain, nonatomic) id<MLComputeDeviceProtocol> computeDevice;
@property (readonly, nonatomic) long long revision;

+ (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
+ (id)VisualGenerationTextEncoderV1ConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;

- (void).cxx_destruct;
- (id)initVisualGenerationTextEncoderV1ConfigurationForRevision:(long long)a0 vocabularyModelPath:(id)a1 tokenEmbeddingNetworkPath:(id)a2 textEncoderNetworkPath:(id)a3;

@end
