@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SUReachabilityMonitor : NSObject {
    struct __SCNetworkReachability { } *_reachability;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSString *_hostName;
    NSString *_directHostName;
    id /* block */ _notifyBlock;
}

+ (id)_directHostToCheckConsideringProxy:(id)a0;
+ (BOOL)isHostReachable:(id)a0;
+ (BOOL)waitForNetworkAvailabilityWithTimeout:(long long)a0 forHost:(id)a1;

- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)isHostReachable;
- (void)_handleChangeInReachability:(unsigned int)a0;
- (BOOL)_startListeningForReachabilityChanges;
- (void)_stopListeningForReachabilityChanges;
- (id)initWithHostName:(id)a0 notifyQueue:(id)a1 usingBlock:(id /* block */)a2;

@end
