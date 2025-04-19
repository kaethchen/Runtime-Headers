@class NSString, NSDictionary, bnnsIrMappedWeight, CSFMil2bnnsCompilationConfig;

@interface CSFMil2bnnsComputeBackend : NSObject <CSFModelComputeBackend> {
    struct { void *data; unsigned long long size; } _graph;
    struct { void *data; unsigned long long size; } _graphContext;
}

@property (nonatomic) BOOL graphIsMapped;
@property (retain, nonatomic) NSDictionary *bnnsIrOutputTensorsProperty;
@property (retain, nonatomic) NSDictionary *bnnsIrInputTensorsProperty;
@property (readonly, nonatomic) NSString *milPath;
@property (readonly, nonatomic) NSString *bnnsIrPath;
@property (readonly, nonatomic) NSString *funcName;
@property (retain, nonatomic) bnnsIrMappedWeight *weight;
@property (retain, nonatomic) CSFMil2bnnsCompilationConfig *modelCompilationConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { void *x0; unsigned long long x1; })_compileWithMilFile:(id)a0 bnnsIrPath:(id)a1 separateWeight:(id)a2 compilationConfig:(id)a3 isBnnsIrMapped:(BOOL *)a4 errOut:(id *)a5;
+ (id)compileWithMilFile:(id)a0 bnnsIrPath:(id)a1 separateWeight:(id)a2;
+ (void)markPurgeableWithBnnsIrFile:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)predictOutputWithInputs:(id)a0 errOut:(id *)a1;
- (id)_convertOutputBuffer:(id)a0;
- (id)_fetchTensorPropertiesForName:(id)a0;
- (unsigned long long)_getDataTypeFromTensorDesc:(struct { unsigned int x0; unsigned int x1; unsigned long long x2[8]; unsigned long long x3[8]; void *x4; unsigned int x5; void *x6; unsigned int x7; float x8; float x9; })a0;
- (id)_getShapeFromTensorDesc:(struct { unsigned int x0; unsigned int x1; unsigned long long x2[8]; unsigned long long x3[8]; void *x4; unsigned int x5; void *x6; unsigned int x7; float x8; float x9; })a0;
- (void)_graphInitWithError:(id *)a0;
- (void)_loadGraph:(id *)a0;
- (struct { void *x0; unsigned long long x1; })_mapBnnsIrPath:(id)a0 errOut:(id *)a1;
- (void)_pointBnnsIrToWeights:(id)a0 errOut:(id *)a1;
- (BOOL)_populateModelInterfaceParameters;
- (id)_runWithMil2bnnsDataInputBuff:(id)a0 error:(id *)a1;
- (id)getExpectedInputTensors;
- (id)getExpectedOutputTensors;
- (id)initWithBnnsIrFile:(id)a0 weightPath:(id)a1 errOut:(id *)a2;
- (id)initWithModelFile:(id)a0 bnnsIrPath:(id)a1 errOut:(id *)a2;
- (id)initWithModelFile:(id)a0 errOut:(id *)a1;

@end
