@class _TtC8VideosUI32RemoteNetworkReachabilityMonitor;

@interface VideosUI.RemoteNetworkReachabilityMonitor : NSObject {
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ networkActor;
}

@property (class, nonatomic, readonly) _TtC8VideosUI32RemoteNetworkReachabilityMonitor *shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isReachable;
- (void)checkRemoteServerReachabilityWithCompletionHandler:(void (^)(void))a0;
- (BOOL)isLikelyReachable;

@end
