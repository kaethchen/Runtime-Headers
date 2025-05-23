@class SLODLDClassifierV1, SLODLDConfigDecoder;
@protocol SLODLDPreProcessingComponent, SLODLDTokenizerComponent;

@interface SLODLDProcessor : NSObject

@property (retain, nonatomic) SLODLDConfigDecoder *config;
@property (retain, nonatomic) id<SLODLDPreProcessingComponent> preprocessor;
@property (retain, nonatomic) id<SLODLDTokenizerComponent> tokenizer;
@property (retain, nonatomic) SLODLDClassifierV1 *model;

- (void).cxx_destruct;
- (id)_getPreprocessorForType:(unsigned long long)a0 withConfig:(id)a1;
- (id)_getTokenizerForType:(unsigned long long)a0 withConfig:(id)a1;
- (id)_setupPipelineComponentsUsingConfig:(id)a0;
- (id)getEncodedTokensForUtt:(id)a0;
- (id)initWithConfigFile:(id)a0 error:(id *)a1;
- (id)processInputContext:(id)a0;
- (id)processInputUtterance:(id)a0;

@end
