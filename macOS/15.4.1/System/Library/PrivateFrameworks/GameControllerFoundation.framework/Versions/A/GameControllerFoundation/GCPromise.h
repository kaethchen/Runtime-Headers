@class GCFuture;

@interface GCPromise : NSObject {
    GCFuture *_future;
}

@property (readonly, getter=isCancelled) BOOL cancelled;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (id)redactedDescription;
- (void)cancel;
- (id)future;
- (void)succeedWithResult:(id)a0;

@end
