@class HMMTRAccessControl, NSUUID, HMMTRControllerData, HMMTRFabricData, NSNumber, NSObject;
@protocol OS_dispatch_queue, HMMTRFabricDelegate;

@interface HMMTRFabric : HMFObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL cachedDataValid;
@property (copy) NSNumber *fabricID;
@property (readonly) NSUUID *targetFabricUUID;
@property (readonly, getter=isSystemCommissionerFabric) BOOL systemCommissionerFabric;
@property (retain, nonatomic) HMMTRAccessControl *accessControl;
@property (readonly, weak, nonatomic) id<HMMTRFabricDelegate> delegate;
@property (readonly, nonatomic) HMMTRFabricData *fabricData;
@property (readonly, nonatomic) HMMTRControllerData *currentDeviceNodeData;
@property (retain, nonatomic) NSUUID *controllerEntityIdentifier;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)invalidateCachedData;
- (id)targetFabricUUID;
- (BOOL)isCachedDataValid;

@end
