@interface KHReachability : NSObject {
    struct __SCNetworkReachability { } *_reachability;
    unsigned long long _currentStatus;
}

+ (id)defaultOfflineError;
+ (id)defaultReachability;

- (void)dealloc;
- (id)init;
- (unsigned long long)currentStatus;
- (unsigned long long)_networkStatusForFlags:(unsigned int)a0;

@end
