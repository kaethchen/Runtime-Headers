@interface SNDSPGraph : NSObject {
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)preflight:(long long)a0 outputFrameCount:(long long *)a1 error:(id *)a2;
- (BOOL)processInputBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inputFrameCount:(unsigned int)a1 atSourcePosition:(long long)a2 to:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a3 outputFrameCapacity:(unsigned int)a4 outputFrameCount:(unsigned int *)a5 atDestinationPosition:(long long *)a6 error:(id *)a7;

@end
