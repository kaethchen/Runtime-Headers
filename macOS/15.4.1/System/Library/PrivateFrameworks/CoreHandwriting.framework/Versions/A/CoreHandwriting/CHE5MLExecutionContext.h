@class NSObject, VisionCoreE5RTExecutionContext, VisionCoreE5RTInferenceFunctionDescriptor, VisionCoreNamedObjects, VisionCoreE5RTExecutionPrewarmedState;
@protocol OS_dispatch_queue;

@interface CHE5MLExecutionContext : NSObject {
    VisionCoreE5RTExecutionPrewarmedState *_prewarmedState;
    id /* block */ _prewarmBlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _executionLock;
    NSObject<OS_dispatch_queue> *_contextQueue;
    VisionCoreE5RTExecutionContext *_executionContext;
    VisionCoreNamedObjects *_preboundInputObjects;
    VisionCoreE5RTExecutionContext *_preboundExecutionContext;
}

@property (readonly, nonatomic) VisionCoreE5RTInferenceFunctionDescriptor *functionDescriptor;
@property (readonly, nonatomic) VisionCoreNamedObjects *preboundOutputObjects;

- (void).cxx_destruct;
- (id)initWithFunction:(id)a0;
- (void)predictFromPreboundInputsAsync:(id /* block */)a0;
- (id)newE5RTExecutionContextForFunctionDescriptor:(id)a0 error:(id *)a1;
- (id)newE5RTExecutionContextForFunctionDescriptor:(id)a0 preboundInputs:(id)a1 preboundOutputs:(id)a2 error:(id *)a3;
- (void)prebindInputs:(id)a0;
- (BOOL)predictFromPreboundInputsWithError:(id *)a0;
- (id)predictionFromFeatureProvider:(id)a0 error:(id *)a1;
- (id)predictionFromInputObjects:(id)a0 error:(id *)a1;
- (id)sharedExecutionContextWithError:(id *)a0;
- (void)unbindInputs;

@end
