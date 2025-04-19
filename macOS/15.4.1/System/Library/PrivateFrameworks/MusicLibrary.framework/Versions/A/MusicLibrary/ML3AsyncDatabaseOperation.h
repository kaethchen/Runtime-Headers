@class NSError;

@interface ML3AsyncDatabaseOperation : ML3DatabaseOperation {
    BOOL _finished;
    BOOL _executing;
    BOOL _cancelled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _startTime;
    BOOL _success;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)error;
- (void)finish;
- (void)start;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isCancelled;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)success;
- (void)execute;
- (void)finishWithError:(id)a0;
- (void)_execute;
- (BOOL)_verifyLibraryAndAttributesProperties:(id *)a0;
- (id)initWithLibrary:(id)a0 writer:(id)a1;

@end
