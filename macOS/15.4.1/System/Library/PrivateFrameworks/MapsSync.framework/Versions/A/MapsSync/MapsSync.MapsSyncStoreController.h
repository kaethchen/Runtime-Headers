@class NSArray;

@interface MapsSync.MapsSyncStoreController : NSObject <MapsSync.MapsSyncStoreDelegate> {
    void /* unknown type, empty encoding */ storeSubscriptionTypes;
    void /* unknown type, empty encoding */ _store;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _callbackQueue;
    void /* unknown type, empty encoding */ _barrierQueue;
}

@property (nonatomic, copy) NSArray *storeSubscriptionTypes;

- (id)init;
- (void).cxx_destruct;
- (void)storeDidChangeWithTypes:(id)a0;
- (id)initWithConfig:(id)a0 notifyForChanges:(id)a1 callbackQueue:(id)a2 delegate:(id)a3;
- (id)initWithNotifyForChanges:(id)a0 delegate:(id)a1;

@end
