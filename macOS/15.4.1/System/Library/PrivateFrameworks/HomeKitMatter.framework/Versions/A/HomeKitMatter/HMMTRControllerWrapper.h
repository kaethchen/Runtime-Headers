@class HMMTRControllerFactory, MTRDeviceController, HMMTRControllerParameters, NSString, NSUUID, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRControllerWrapper : HMFObject {
    HMMTRControllerParameters *_startupParams;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMMTRControllerFactory *factory;
@property (readonly, nonatomic) NSMutableArray *revokeHandlers;
@property (retain, nonatomic) MTRDeviceController *cachedDeviceController;
@property (nonatomic) BOOL didSendRevokeAvailableOnResume;
@property (readonly) MTRDeviceController *controller;
@property (readonly, nonatomic) HMMTRControllerParameters *startupParams;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUUID *entityIdentifier;

+ (id)shortDescription;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)remove;
- (id)privateDescription;
- (void)shutdown;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)_revokeAvailable:(BOOL)a0;
- (void)deregisterRevokeHandlersWithQueue:(id)a0;
- (id)initWithWorkQueue:(id)a0 factory:(id)a1 startupParams:(id)a2 name:(id)a3 entityIdentifier:(id)a4;
- (void)registerRevokeHandlerWithQueue:(id)a0 handler:(id /* block */)a1;
- (void)replaceStartupParams:(id)a0;
- (id)startupParams;
- (void)suspendOrShutdown;

@end
