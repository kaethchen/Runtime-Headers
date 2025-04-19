@class NSXPCListener, BridgeServiceDelegate;

@interface USTBridgeListenerManager : NSObject {
    NSXPCListener *_listener;
    BridgeServiceDelegate *_serviceDelegate;
}

- (void).cxx_destruct;
- (void)resume;
- (id)initWithServer:(id)a0;

@end
