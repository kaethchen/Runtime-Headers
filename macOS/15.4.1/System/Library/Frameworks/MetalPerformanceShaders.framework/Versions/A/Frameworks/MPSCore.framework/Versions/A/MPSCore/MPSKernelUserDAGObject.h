@interface MPSKernelUserDAGObject : NSObject {
    struct shared_ptr<MPSKernelUserDAG> { struct MPSKernelUserDAG *__ptr_; struct __shared_weak_count *__cntrl_; } _kernelUserDAGSharedPtr;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)getMTLStitchingGraph;
- (id)getVisibleFunctions;
- (id)initWithKernelUserDAG:(void *)a0;

@end
