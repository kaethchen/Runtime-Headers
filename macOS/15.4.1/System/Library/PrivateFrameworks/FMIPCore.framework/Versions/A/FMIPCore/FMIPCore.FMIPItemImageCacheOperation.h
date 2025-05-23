@interface FMIPCore.FMIPItemImageCacheOperation : NSOperation {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ _isFinished;
}

@property (nonatomic) BOOL finished;
@property (nonatomic, readonly) BOOL asynchronous;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (void)main;

@end
