@class NSObject;
@protocol OS_dispatch_queue;

@interface KHDBTriggerEntry : NSObject {
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldCoalesce;
    int _running;
}

- (void)dealloc;
- (void)fire;
- (id)initWithBlock:(id /* block */)a0 onQueue:(id)a1;

@end
