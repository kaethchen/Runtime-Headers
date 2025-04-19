@class NSArray, NSDictionary, NSString;
@protocol CSFModelComputeBackend;

@interface SLODLDClassifierV1 : NSObject <SLODLDModelComponent>

@property (retain, nonatomic) id<CSFModelComputeBackend> odldClassifier;
@property (retain, nonatomic) NSArray *outputNodes;
@property (retain, nonatomic) NSDictionary *inputSpecs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfigFile:(id)a0;
- (id)_extractModelSpecs;
- (id)_constructFeatureDictionary:(id)a0 withCtx:(id)a1;
- (id)_createDataBufferForTensor:(id)a0 withData:(id)a1 properties:(id)a2;
- (id)initWithConfigFile:(id)a0 bnnsIrWeightPath:(id)a1;
- (float)processEncodedTokens:(id)a0;
- (void)processEncodedTokens:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;

@end
