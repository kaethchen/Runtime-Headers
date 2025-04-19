@class CWWiFiClient, NSMutableDictionary, NSCountedSet;

@interface WiFiManagerClientInternal : NSObject <CWInternalEventDelegate> {
    NSCountedSet *_eventCounters;
    struct WiFiManagerClientInternalCallbacks { struct { void /* function */ *callback; void *refcon; } deviceAttachedCallback; struct { void /* function */ *callback; void *refcon; } wowStateChangedCallback; } _callbacks;
}

@property (readonly) CWWiFiClient *wifiClient;
@property (readonly) NSMutableDictionary *mutableDeviceMap;
@property struct __CFRunLoop { } *runLoopRef;
@property struct __CFString { } *runLoopMode;
@property struct WiFiManagerClientInternalCallbacks { struct { void /* function */ *x0; void *x1; } x0; struct { void /* function */ *x0; void *x1; } x1; } *callbacks;

- (void)dealloc;
- (id)init;
- (void)setDeviceAttachCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (struct WiFiManagerClientInternalCallbacks { struct { void /* function */ *x0; void *x1; } x0; struct { void /* function */ *x0; void *x1; } x1; } *)callbacks;
- (void)deviceAvailabilityChangedForWiFiInterfaceWithName:(id)a0 isAvailable:(BOOL)a1;
- (void)interfaceAddedWithName:(id)a0;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)setEventMonitoringEnabled:(BOOL)a0 event:(long long)a1;
- (void)setWoWStateChangeCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (void)virtualInterfaceStateChangedForWiFiInterfaceWithName:(id)a0;
- (void)wowStateDidChangeForWiFiInterfaceWithName:(id)a0;

@end
