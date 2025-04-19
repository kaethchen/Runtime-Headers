@class SPBeaconManagerSimpleBeaconUpdateInterface, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SPCertificationAssistantSession : NSObject <SPCertificationAssistantProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SPBeaconManagerSimpleBeaconUpdateInterface *simpleBeaconUpdateInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unifiedBeacons:(id)a0;
+ (id)beaconsChanges:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerSimpleBeaconInterfaceWithContext:(id)a0 collectionDifference:(id /* block */)a1 completion:(id /* block */)a2;
- (void)startUpdatingBeaconsWithContext:(id)a0 collectionDifference:(id /* block */)a1 completion:(id /* block */)a2;
- (void)stopUpdatingBeaconsWithCompletion:(id /* block */)a0;

@end
