@class AXDispatchTimer, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HURoutesManager : NSObject {
    NSDictionary *_pickableRoutes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _routingLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (retain, nonatomic) AXDispatchTimer *subscribeTimer;
@property BOOL shouldUpdateClients;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerNotifications;
- (void)mediaServerDied;
- (id)fetchHearingAidsPeripheralUUIDs;
- (id)_copyPickableRoutes;
- (void)_savePickableRoutes:(id)a0;
- (void)clearAudioRoutes;
- (id)currentPickableAudioRoutes;
- (id)fetchCurrentPickableAudioRoutesIfNeeded;
- (void)fetchCurrentPickableAudioRoutesIfNeededAsync:(id /* block */)a0;
- (BOOL)isRouteUIDHearingAidPeripheralUUID:(id)a0 inPeripheralUUIDs:(id)a1;
- (BOOL)oldRoutes:(id)a0 equalToNewRoutes:(id)a1;
- (void)pickableAudioRoutesDidChange:(id)a0;

@end
