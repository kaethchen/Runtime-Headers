@interface ISyncTCCAccessOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly) BOOL accessGranted;

- (void)start;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)finish:(BOOL)a0;

@end
