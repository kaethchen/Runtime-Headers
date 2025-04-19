@class NSString, NSLock;

@interface _ReachabilityRequest : NSObject {
    NSLock *_lock;
    struct __SCNetworkReachability { } *_reachability;
    unsigned int _flags;
    struct __CFDictionary { } *_observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}

@property (readonly, nonatomic) NSString *hostname;

- (void)dealloc;
- (id)description;
- (void)removeObserver:(id)a0;
- (BOOL)hasObservers;
- (void)addObserver:(id)a0 selector:(SEL)a1;
- (id)initWithHostname:(id)a0;
- (void)reachabilityChangedWithFlags:(unsigned int)a0;

@end
