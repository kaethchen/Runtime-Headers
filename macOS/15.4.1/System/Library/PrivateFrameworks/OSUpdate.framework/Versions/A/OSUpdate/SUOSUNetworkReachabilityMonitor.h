@class NSURL, NSObject;
@protocol SUOSUNetworkReachabilityMonitorDelegate, OS_dispatch_queue;

@interface SUOSUNetworkReachabilityMonitor : NSObject

@property (retain) NSURL *targetURL;
@property struct __SCNetworkReachability { } *target;
@property (weak) id<SUOSUNetworkReachabilityMonitorDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL active;
@property (readonly) BOOL isReachable;

+ (BOOL)_isReachableWithFlags:(unsigned int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)startMonitoring;
- (void)stopMonitoring;
- (BOOL)_sendHTTPHeadRequestToTargetURL;
- (void)_reachabilityChangedWithTarget:(struct __SCNetworkReachability { } *)a0 flags:(unsigned int)a1;
- (id)initWithTargetURL:(id)a0 delegate:(id)a1;

@end
