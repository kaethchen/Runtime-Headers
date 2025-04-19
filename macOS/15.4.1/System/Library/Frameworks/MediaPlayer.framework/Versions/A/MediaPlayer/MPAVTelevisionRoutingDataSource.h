@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource {
    void *_discoveryController;
    NSMutableArray *_discoveredTelevisions;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setDiscoveryMode:(long long)a0;
- (BOOL)devicePresenceDetected;
- (id)_discoveredTelevisions;
- (void)_onQueue_controllerDidDiscoverTelevision:(void *)a0;
- (void)_onQueue_controllerDidRemoveTelevision:(void *)a0;
- (void)getPickedRouteHasVolumeControlWithCompletion:(id /* block */)a0;
- (id)getRoutesForCategory:(id)a0;

@end
