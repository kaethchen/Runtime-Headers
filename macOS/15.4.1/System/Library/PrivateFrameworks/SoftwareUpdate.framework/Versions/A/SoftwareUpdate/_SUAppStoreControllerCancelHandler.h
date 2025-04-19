@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface _SUAppStoreControllerCancelHandler : NSObject {
    NSArray *_keys;
    BOOL _isCancelled;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isCancelled;
- (void)setProductKeys:(id)a0;
- (void)cancelUsingConnection:(id)a0;

@end
