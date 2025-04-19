@class _MLTModelComparatorConfiguration;

@interface _MLTModelComparator : NSObject

@property (retain, nonatomic) _MLTModelComparatorConfiguration *config;

+ (id)defaultMetricsForFeatureType:(long long)a0;
+ (id)exposedInputsForModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (BOOL)augmentTestInput:(id)a0 WithOutputsFromModel:(id)a1 error:(id *)a2;
- (BOOL)compareModelsAddingMLProgram:(BOOL)a0 assertModelIsMLProgram:(BOOL)a1 inMemoryModel:(BOOL)a2 inMemoryModelBlobFileResolutionOption:(long long)a3 error:(id *)a4;
- (BOOL)compareModelsAddingMLProgram:(BOOL)a0 assertModelIsMLProgram:(BOOL)a1 inMemoryModel:(BOOL)a2 inMemoryModelBlobFileResolutionOption:(long long)a3 experimentalMLE5EngineUsage:(long long)a4 error:(id *)a5;
- (id)getImagesForModel:(id)a0 error:(id *)a1;
- (id)groundTruthFromSource:(BOOL)a0 inMemoryModelBlobFileResolutionOption:(long long)a1 experimentalMLE5EngineUsage:(long long)a2 error:(id *)a3;

@end
