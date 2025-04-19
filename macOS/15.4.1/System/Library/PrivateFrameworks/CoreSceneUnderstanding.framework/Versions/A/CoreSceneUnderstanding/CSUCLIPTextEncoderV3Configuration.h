@class NSString, NSArray;
@protocol MLComputeDeviceProtocol;

@interface CSUCLIPTextEncoderV3Configuration : NSObject <CSUCLIPTextEncoderConfiguration>

@property (readonly, copy, nonatomic) NSString *vocabularyModelPath;
@property (readonly, copy, nonatomic) NSString *tokenEmbeddingNetworkPath;
@property (readonly, copy, nonatomic) NSString *textEncoderNetworkPath;
@property (readonly, nonatomic) unsigned long long maximumSequenceLength;
@property (readonly, nonatomic) BOOL inputIsLowerCase;
@property (readonly, copy, nonatomic) NSString *inputTextIDTensorName;
@property (readonly, copy, nonatomic) NSString *inputTextIDMaskTensorName;
@property (readonly, copy, nonatomic) NSString *outputTokenEmbeddingIDTensorName;
@property (readonly, copy, nonatomic) NSString *outputTokenEmbeddingMaskTensorName;
@property (readonly, copy, nonatomic) NSString *inputTokenEmbeddingIDTensorName;
@property (readonly, copy, nonatomic) NSString *inputTokenEmbeddingMaskTensorName;
@property (readonly, copy, nonatomic) NSString *outputTextEmbeddingTensorName;
@property (readonly) int espressoExecutionEngine;
@property (readonly, copy, nonatomic) NSArray *supportedComputeDevices;
@property (retain, nonatomic) id<MLComputeDeviceProtocol> computeDevice;
@property (readonly, nonatomic) long long revision;

+ (id)CLIPTextEncoderV3ConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;

- (void).cxx_destruct;
- (id)initCLIPTextEncoderV3ConfigurationForRevision:(long long)a0 vocabularyModelPath:(id)a1 tokenEmbeddingNetworkPath:(id)a2 textEncoderNetworkPath:(id)a3;

@end
