@class NSDictionary, MLModelConfiguration, MLModelDescription, MLModelStructure;

@interface MLComputePlan : NSObject

@property (readonly, copy, nonatomic) NSDictionary *computeDevicesBySupportedComputeUnits;
@property (readonly, copy, nonatomic) NSDictionary *executionScheduleByModelStructurePath;
@property (readonly, nonatomic) long long modelAssetStorageType;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) MLModelStructure *modelStructure;

+ (id)computePlanOfModelStructure:(id)a0 modelAsset:(id)a1 configuration:(id)a2 error:(id *)a3;
+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)loadModelAsset:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)computeDeviceUsageForMLProgramOperation:(id)a0;
- (id)computeDeviceUsageForNeuralNetworkLayer:(id)a0;
- (id)estimatedCostOfMLProgramOperation:(id)a0;
- (id)initWithModelStructure:(id)a0 modelDescription:(id)a1 modelAssetStorageType:(long long)a2 executionSchedule:(id)a3 configuration:(id)a4;

@end
