@class NSString, NSMutableDictionary, NSURL, NSArray, NSDictionary;

@interface CSUTextEncoderE5MLConfiguration : NSObject

@property (copy, nonatomic) NSString *vocabularyModelPath;
@property (copy, nonatomic) NSURL *tokenEmbeddingNetworkURL;
@property (copy, nonatomic) NSString *tokenEmbeddingNetworkPath;
@property (copy, nonatomic) NSURL *textEncoderNetworkURL;
@property (copy, nonatomic) NSString *textEncoderNetworkPath;
@property (nonatomic) BOOL sideLoaded;
@property (nonatomic) unsigned long long maximumSequenceLength;
@property (nonatomic) unsigned long long tokenEmbeddingLength;
@property (nonatomic) unsigned long long numCustomTokens;
@property (nonatomic) BOOL usePrecompiledBundleForMacOS;
@property (retain, nonatomic) NSMutableDictionary *layerShapes;
@property (retain, nonatomic) NSMutableDictionary *layerWidths;
@property (retain, nonatomic) NSMutableDictionary *layerHeights;
@property (nonatomic) BOOL inputIsLowerCase;
@property (copy, nonatomic) NSString *inputTextIDTensorName;
@property (copy, nonatomic) NSString *outputTokenEmbeddingIDTensorName;
@property (copy, nonatomic) NSString *inputTokenEmbeddingIDTensorName;
@property (copy, nonatomic) NSString *inputTokenEmbeddingMaskTensorName;
@property (copy, nonatomic) NSString *outputTextEmbeddingTensorName;
@property (copy, nonatomic) NSString *outputLastHiddenStateTensorName;
@property int espressoExecutionEngine;
@property (nonatomic) unsigned long long contextLength;
@property (retain, nonatomic) NSArray *additionalLayerNames;
@property (nonatomic) NSString *e5function;
@property (nonatomic) NSDictionary *e5FunctionsAvailable;
@property (readonly, nonatomic) long long revision;

+ (id)TextEncoderE5MLConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;
+ (id)getConfigurationForRevision_v1_2_EnglishWithError:(id *)a0;
+ (id)getConfigurationForRevision_v5_0_Tier0WithError:(id *)a0;
+ (id)getConfigurationFromModelCatalogForRevision_v1_2_EnglishWithError:(id *)a0;
+ (id)getConfigurationFromModelCatalogForRevision_v4_1_Tier0WithError:(id *)a0;
+ (id)overrideWithSideLoadedPathForTokenEmbeddingModel:(id)a0 TextEmbeddingModel:(id)a1;

- (void).cxx_destruct;
- (id)initTextEncoderV1ConfigurationForRevision:(long long)a0 vocabularyModelPath:(id)a1 tokenEmbeddingNetworkPath:(id)a2 textEncoderNetworkPath:(id)a3 encoderParams:(id)a4;

@end
