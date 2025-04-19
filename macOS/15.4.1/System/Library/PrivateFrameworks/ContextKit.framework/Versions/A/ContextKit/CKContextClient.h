@class CKContextSemaphore, NSSet, NSString, NSMutableArray;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    CKContextSemaphore *_serviceSemaphore;
}

@property (readonly, nonatomic) unsigned long long defaultRequestType;
@property (readonly, nonatomic) NSSet *capabilities;

+ (id)new;
+ (void)initialize;
+ (id)clientWithPreferredRequestType:(unsigned long long)a0;
+ (id)clientWithDefaultRequestType:(unsigned long long)a0;
+ (BOOL)isLikelyUnsolicitedUserInteraction;
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)createRequest;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (void)didReceiveCKContextServiceUpdateNotification;
- (void)ensureFullyInitialized;
- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;
- (id)indexVersionId;
- (id)initWithDefaultRequestType:(unsigned long long)a0;
- (id)newRequest;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (id)retrieveCapabilites;
- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (void)workWithServiceSemaphore:(id /* block */)a0;

@end
