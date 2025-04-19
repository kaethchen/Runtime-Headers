@class NSString;

@interface CCAsyncBlockOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_personaIdentifier;
}

@property (readonly, copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)complete;
- (id)initWithAsyncOperationBlock:(id /* block */)a0;
- (id)initWithPersonaIdentifier:(id)a0 asyncOperationBlock:(id /* block */)a1;

@end
