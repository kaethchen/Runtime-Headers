@class HMMTRAccessoryServer, NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRAccessoryReachabilityObserver : HMFObject <HAPAccessoryServerNotification>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) HMMTRAccessoryServer *targetServer;
@property (copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)logIdentifier;
- (void)indicateNotificationFromServer:(id)a0 notifyType:(unsigned long long)a1 withDictionary:(id)a2;
- (void)startObservingReachabilityForAccessoryServer:(id)a0 completion:(id /* block */)a1;
- (void)stopObservingReachabilityWithError:(id)a0;

@end
