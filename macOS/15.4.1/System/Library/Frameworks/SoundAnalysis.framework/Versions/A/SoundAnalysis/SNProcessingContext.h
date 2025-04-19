@interface SNProcessingContext : NSObject {
    struct shared_ptr<SoundAnalysis::ProcessingContext> { struct ProcessingContext *__ptr_; struct __shared_weak_count *__cntrl_; } _processingContext;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithGraph:(id)a0 sharedProcessingGraph:(id)a1 error:(id *)a2;
- (struct shared_ptr<SoundAnalysis::ProcessingContext> { struct ProcessingContext *x0; struct __shared_weak_count *x1; })processingContext;

@end
