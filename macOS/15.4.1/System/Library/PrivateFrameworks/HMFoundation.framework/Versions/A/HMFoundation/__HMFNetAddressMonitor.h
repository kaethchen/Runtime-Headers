@class HMFNetAddress, NSObject;
@protocol OS_dispatch_queue;

@interface __HMFNetAddressMonitor : HMFNetMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    HMFNetAddress *_netAddress;
}

@property (readonly, nonatomic) struct __SCNetworkReachability { } *networkReachabilityRef;
@property (nonatomic) unsigned int currentNetworkFlags;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithNetService:(id)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)handleNetworkReachabilityChange:(unsigned int)a0;
- (id)initWithNetAddress:(id)a0;
- (id)netAddress;
- (unsigned long long)reachabilityPath;

@end
