@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (void)dealloc;
- (id)init;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)endOperation;
- (void)startOperation;

@end
