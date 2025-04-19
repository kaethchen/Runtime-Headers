@interface TVPReachabilityMonitor : NSObject {
    struct __SCNetworkReachability { } *_reachability;
}

@property (readonly, nonatomic) unsigned long long networkType;
@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isWifiEnabled;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)_init;
- (void)_wifiDidChange:(id)a0;
- (void)_reachabilityDidChange:(id)a0;

@end
