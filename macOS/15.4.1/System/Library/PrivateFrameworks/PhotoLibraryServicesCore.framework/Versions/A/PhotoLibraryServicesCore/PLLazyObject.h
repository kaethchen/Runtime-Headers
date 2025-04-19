@interface PLLazyObject : NSObject {
    BOOL _shouldRetryBlockOnNil;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _block;
    id _object;
}

@property (readonly) id objectValue;
@property (readonly) id currentObjectValueWithoutForcingEvaluation;

- (id)init;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithRetriableBlock:(id /* block */)a0;
- (void)invalidateWithHandler:(id /* block */)a0;
- (void)resetObject;
- (void)resetObjectWithHandler:(id /* block */)a0;
- (id)initWithRetry:(BOOL)a0 block:(id /* block */)a1;

@end
