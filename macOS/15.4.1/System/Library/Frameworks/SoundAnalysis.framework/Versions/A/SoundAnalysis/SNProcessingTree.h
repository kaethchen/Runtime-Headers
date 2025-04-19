@interface SNProcessingTree : NSObject {
    struct shared_ptr<SoundAnalysis::ProcessingTree> { struct ProcessingTree *__ptr_; struct __shared_weak_count *__cntrl_; } _processingTree;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithError:(id *)a0;
- (BOOL)setFormat:(struct SNFormatAndBlockSize { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; })a0 error:(id *)a1;
- (id)clientSampleRateWithError:(id *)a0;
- (id)clientSampleTimeFromSampleTime:(long long)a0 fromBox:(id)a1 error:(id *)a2;
- (id)maxFramesPerSliceWithError:(id *)a0;
- (BOOL)processBuffer:(id)a0 framePosition:(long long)a1 error:(id *)a2;
- (struct shared_ptr<SoundAnalysis::ProcessingTree> { struct ProcessingTree *x0; struct __shared_weak_count *x1; })processingTree;
- (BOOL)setProcessingContexts:(id)a0 error:(id *)a1;
- (BOOL)writeDSPGraphDotFilesToDirectory:(id)a0 error:(id *)a1;

@end
