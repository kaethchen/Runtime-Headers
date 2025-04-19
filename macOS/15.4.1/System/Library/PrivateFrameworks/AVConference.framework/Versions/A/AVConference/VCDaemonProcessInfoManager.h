@class NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

+ (id)sharedManager;
+ (id)copyProcessInfo;

- (oneway void)release;
- (void)dealloc;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)copyAuditTokenInfo;
- (id)copyUniquePidInfo;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;

@end
