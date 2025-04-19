@interface CLSReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL _localWiFiRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityWithHostName:(id)a0;

- (void)dealloc;
- (BOOL)connectionRequired;
- (BOOL)startNotifier;
- (void)stopNotifier;
- (long long)_localWiFiStatusForFlags:(unsigned int)a0;
- (long long)_networkStatusForFlags:(unsigned int)a0;
- (long long)currentNetworkStatus;
- (id)initWithNetworkReachability:(struct __SCNetworkReachability { } *)a0;

@end
