@class VCPVideoTrackDecoder, NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface VCPVideoAnalysisPipelineManager : NSObject {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _err;
    VCPVideoTrackDecoder *_decoder;
    BOOL _decodeDone;
    NSMutableArray *_frameResources;
    unsigned long long _maxBufferedFrames;
    NSArray *_pipelineBlocks;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    NSMutableArray *_pipelineQueues;
    NSObject<OS_dispatch_group> *_group;
    id /* block */ _cancelBlock;
    NSString *_logPrefix;
}

@property (nonatomic) unsigned long long flags;

- (int)run;
- (void).cxx_destruct;
- (int)addFrameResource:(id)a0;
- (void)executeDecode;
- (void)executePipelineStageAt:(unsigned long long)a0 currentFrameResource:(id)a1 nextFrameSample:(struct opaqueCMSampleBuffer { } *)a2;
- (void)flushFrameResources;
- (id)initWithVideoAnalysisBlocks:(id)a0 videoDecoder:(id)a1 maxBufferedFrames:(unsigned long long)a2 cancelBlock:(id /* block */)a3;
- (id)lastFrameResource;
- (int)manageFrameResources;
- (id)nextFrameResource;

@end
