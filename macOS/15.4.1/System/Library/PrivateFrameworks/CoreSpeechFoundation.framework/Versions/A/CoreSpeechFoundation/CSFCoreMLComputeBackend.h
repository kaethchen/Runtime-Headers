@class NSString, NSDictionary, MLModel, MLPredictionOptions;

@interface CSFCoreMLComputeBackend : NSObject <CSFModelComputeBackend>

@property (retain, nonatomic) NSDictionary *inputSpecs;
@property (retain, nonatomic) NSDictionary *outputSpecs;
@property (retain, nonatomic) MLModel *coremlModel;
@property (retain, nonatomic) MLPredictionOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)predictOutputWithInputs:(id)a0 errOut:(id *)a1;
- (id)_convertDataBufferToMLMultiArray:(id)a0 error:(id *)a1;
- (id)_convertInputToCoreMLInputs:(id)a0 error:(id *)a1;
- (id)_convertOuputsToNSArrayWithCoreMLOutputs:(id)a0 error:(id *)a1;
- (id)_fetchTensorPropertiesWithFeatDesc:(id)a0;
- (unsigned long long)_getComputeDataTypeForMLType:(long long)a0;
- (long long)_getMLMultiArrayDataTypeForComputeType:(unsigned long long)a0;
- (BOOL)_populateModelInterfaceParameters;
- (id)getExpectedInputTensors;
- (id)getExpectedOutputTensors;
- (id)initWithModelFile:(id)a0 error:(id *)a1;

@end
