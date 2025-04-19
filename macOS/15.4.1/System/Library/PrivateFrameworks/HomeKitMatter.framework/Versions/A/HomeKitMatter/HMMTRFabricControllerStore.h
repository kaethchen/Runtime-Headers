@class HMMTRControllerFactory, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRFabricControllerStore : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMMTRControllerFactory *controllerFactory;
@property (readonly, nonatomic) NSMutableDictionary *controllerWrappers;

+ (id)logCategory;
+ (BOOL)startupParams1:(id)a0 isEquivalentTo:(id)a1;
+ (BOOL)startupParams2:(id)a0 isEquivalentTo:(id)a1;
+ (BOOL)startupParams:(id)a0 isEquivalentTo:(id)a1;

- (void).cxx_destruct;
- (void)_auditControllerWrappersWithAllFabricUUIDs:(id)a0;
- (id)cachedWrapperWithFabricID:(id)a0;
- (id)cachedWrapperWithTargetFabricUUID:(id)a0;
- (id)initWithQueue:(id)a0 controllerFactory:(id)a1;
- (void)removeAllGetters;
- (void)removeTargetFabricUUID:(id)a0;
- (void)updateAllTargetFabricUUIDs:(id)a0;
- (id)wrapperWithTargetFabricUUID:(id)a0 startupParams:(id)a1 allTargetFabricUUIDs:(id)a2 entityIdentifier:(id)a3;

@end
