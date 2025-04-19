@class NSArray, __end_cap_, NSURL, NSString, NSMutableArray, __end_;

@interface VCPCNNModelEspressoV2 : NSObject {
    NSURL *_netFileUrl;
    NSArray *_inputNames;
    NSArray *_outputNames;
    NSString *_functionName;
    NSMutableArray *_outputsSize;
    struct e5rt_execution_stream { } *_stream;
    NSMutableArray *_inputIOArray;
    NSMutableArray *_outputIOArray;
}

@property (readonly, nonatomic) struct vector<VCPEspressoV2Data *, std::allocator<VCPEspressoV2Data *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<VCPEspressoV2Data *__strong *, std::allocator<VCPEspressoV2Data *>> { id *__value_; } x1; } outputs;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)getOutputs;
- (struct e5rt_execution_stream_operation { } *)createPrecompiledOp:(id)a0 isPrecompiled:(BOOL)a1 functionName:(id)a2;
- (int)espressoForward:(void *)a0;
- (int)espressoForwardInputs:(struct vector<void *, std::allocator<void *>> { void **x0; void **x1; struct __compressed_pair<void **, std::allocator<void *>> { void **x0; } x2; })a0;
- (id)initWithParameters:(id)a0 outputNames:(id)a1 inputNames:(id)a2 functionName:(id)a3;
- (id)inputsSize;
- (id)inputsType;
- (id)outputsSize;
- (id)outputsType;

@end
