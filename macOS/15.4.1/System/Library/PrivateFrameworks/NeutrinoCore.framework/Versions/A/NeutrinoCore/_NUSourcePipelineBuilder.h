@class NUSourceSchema;

@interface _NUSourcePipelineBuilder : NSObject <NUPipelineBuilder>

@property (readonly, copy, nonatomic) NUSourceSchema *sourceSchema;

- (id)init;
- (void).cxx_destruct;
- (id)buildPipeline:(out id *)a0;
- (BOOL)buildPipeline:(id)a0 error:(out id *)a1;
- (id)initWithSourceSchema:(id)a0;

@end
