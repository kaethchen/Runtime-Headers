@class NSObject, NSString, NSNumber, IDSServerBag;
@protocol OS_dispatch_source, OS_dispatch_queue, COIDSServerBagDelegate;

@interface COIDSServerBag : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) IDSServerBag *idsServerBag;
@property (readonly) NSObject<OS_dispatch_source> *refreshTimer;
@property (readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property long long currentTimerDelay;
@property (retain, nonatomic, getter=isFastFoldEnabled) NSNumber *fastFoldEnabled;
@property (retain, nonatomic, getter=isIPDiffingEnabled) NSNumber *ipDiffingEnabled;
@property (readonly, copy) NSString *keySuffix;
@property (weak, nonatomic) id<COIDSServerBagDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)configure;
- (void)_withLock:(id /* block */)a0;
- (void)_onqueue_configureTimer;
- (id)_onqueue_serverBagNumberValueForKey:(id)a0;
- (id)_onqueue_serverBagValueForKey:(id)a0;
- (void)_onqueue_timerFired;
- (void)_onqueue_updateCachedValuesWithServerValues;
- (void)setIpDiffing:(id)a0;

@end
