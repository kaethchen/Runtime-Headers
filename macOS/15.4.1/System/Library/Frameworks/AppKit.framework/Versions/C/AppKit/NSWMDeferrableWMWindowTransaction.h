@class WMWindowTransaction, CAFenceHandle;
@protocol WMWindowTransactionSnapshot;

@interface NSWMDeferrableWMWindowTransaction : NSObject {
    void /* unknown type, empty encoding */ _lock;
}

@property (nonatomic, readonly) BOOL completed;
@property (nonatomic, readonly) WMWindowTransaction *transaction;
@property (nonatomic, retain) CAFenceHandle *fence;
@property (nonatomic, retain) id<WMWindowTransactionSnapshot> snapshot;

- (id)init;
- (void).cxx_destruct;
- (BOOL)completeWithCompletionHandler:(id /* block */)a0;
- (unsigned int)copyDeferCompletionUntilPort;
- (id /* block */)deferCompletionUntil;

@end
