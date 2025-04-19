@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface NURenderTransaction : NSObject {
    long long _nestingLevel;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) NSArray *pendingRequests;

+ (void)commit;
+ (void)begin;
+ (id)currentTransaction;
+ (void)setCurrentTransaction:(id)a0;
+ (void)_commit:(id)a0;
+ (void)group:(id /* block */)a0;
+ (id)assertCurrentTransaction;
+ (void)commitAndNotifyOnQueue:(id)a0 withBlock:(id /* block */)a1;
+ (id)ensureCurrentTransaction;
+ (void)withCurrentTransaction:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)commit;
- (BOOL)begin;
- (void)flush;
- (void)submitRequest:(id)a0;
- (void)notifyCompletion:(id)a0 block:(id /* block */)a1;
- (void)resetPendingRequests;
- (void)submitPendingRequests;

@end
