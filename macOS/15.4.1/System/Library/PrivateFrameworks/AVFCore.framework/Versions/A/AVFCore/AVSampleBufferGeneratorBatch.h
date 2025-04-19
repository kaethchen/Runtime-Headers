@class AVSampleBufferGenerator;

@interface AVSampleBufferGeneratorBatch : NSObject {
    AVSampleBufferGenerator *_sampleGenerator;
    struct OpaqueFigSampleGeneratorBatch { } *_sampleGeneratorBatch;
    BOOL _openToRequests;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) AVSampleBufferGenerator *_generator;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)cancel;
- (id)initWithGenerator:(id)a0;
- (id /* block */)_completionHandler;
- (struct opaqueCMSampleBuffer { } *)createAndAddSampleBufferForRequest:(id)a0 error:(id *)a1;
- (BOOL)isOpenToRequests;
- (void)makeDataReadyWithCompletionHandler:(id /* block */)a0;

@end
