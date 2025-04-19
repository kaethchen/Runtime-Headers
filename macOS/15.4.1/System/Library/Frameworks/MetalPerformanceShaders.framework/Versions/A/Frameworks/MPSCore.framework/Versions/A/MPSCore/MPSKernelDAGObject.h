@class NSMutableDictionary, NSMutableArray;

@interface MPSKernelDAGObject : NSObject {
    struct shared_ptr<MPSKernelDAG> { struct MPSKernelDAG *__ptr_; struct __shared_weak_count *__cntrl_; } _kernelDAGSharedPtr;
    NSMutableDictionary *_stitchedFunctions;
    NSMutableDictionary *_functions;
    NSMutableArray *_functionNames;
    BOOL _keepSubDAGArray[12];
}

@property (readonly, nonatomic) void *finalOp;
@property (readonly, nonatomic) void *graph;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ hash;
@property (nonatomic) struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } dynamicFCs;

- (void)dealloc;
- (id)debugDescription;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getStitchedFunctions:(id)a0;
- (BOOL)hasPostfixFunction;
- (id)initWithKernelDAG:(void *)a0 finalOp:(void *)a1;
- (const void *)inputTensorAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfInputTensors;
- (unsigned long long)numberOfOutputTensors;
- (const void *)outputTensorAtIndex:(unsigned long long)a0;

@end
