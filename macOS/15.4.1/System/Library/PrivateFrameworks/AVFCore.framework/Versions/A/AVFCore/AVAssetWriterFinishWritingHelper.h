@class NSOperation, NSArray;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {
    NSArray *_finishWritingOperations;
    void *_figAssetWriterCallbackContextToken;
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
}

@property (readonly, nonatomic) NSOperation *transitionToTerminalStatusOperation;

- (void)dealloc;
- (long long)status;
- (void)_finishWritingOperationsDidFinish;
- (void)cancelWriting;
- (id)initWithConfigurationState:(id)a0 finishWritingOperations:(id)a1 figAssetWriterCallbackContextToken:(void *)a2 figAssetWriter:(struct OpaqueFigAssetWriter { } *)a3;

@end
