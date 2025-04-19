@class CUTDeferredTaskQueue, IMReachability;

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>

@property (retain, nonatomic) IMReachability *_hostReachability;
@property (retain, nonatomic) IMReachability *_ipReachability;
@property (nonatomic) unsigned long long _hostFlags;
@property (nonatomic) unsigned long long _ipFlags;
@property (nonatomic) BOOL _isConnected;
@property (nonatomic) BOOL _isSleeping;
@property (readonly, nonatomic) CUTDeferredTaskQueue *performCallbackTask;

- (void)dealloc;
- (void).cxx_destruct;
- (void)clear;
- (void)_setup;
- (void)systemWillSleep;
- (void)_clearReachability:(id *)a0 flags:(unsigned long long *)a1;
- (void)_doCallbackLater;
- (void)_doCallbackNow;
- (void)_setupReachability;
- (void)goConnectedWithLocalSocketAddress:(id)a0 remoteSocketAddress:(id)a1;
- (void)goDisconnected;
- (BOOL)isImmediatelyReachable;
- (void)reachabilityDidChange:(id)a0;
- (void)systemDidWake;

@end
