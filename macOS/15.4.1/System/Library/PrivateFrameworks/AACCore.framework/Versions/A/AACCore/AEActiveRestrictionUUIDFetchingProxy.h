@class AEXPCProxy, NSObject;
@protocol OS_dispatch_queue;

@interface AEActiveRestrictionUUIDFetchingProxy : NSObject {
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)daemonProxyWithQueue:(id)a0;
+ (id)proxyWithEndpoint:(id)a0 queue:(id)a1;

- (void).cxx_destruct;
- (id)setOfActiveRestrictionUUIDs:(id)a0;

@end
