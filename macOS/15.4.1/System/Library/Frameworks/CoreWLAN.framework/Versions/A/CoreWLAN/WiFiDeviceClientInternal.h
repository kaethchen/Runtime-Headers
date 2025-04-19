@class NSString, AWDLServiceDiscoveryManager, WiFiManagerClientInternal, CWInterface;

@interface WiFiDeviceClientInternal : NSObject {
    struct WiFiDeviceClientInternalCallbacks { struct { void /* function */ *callback; void *refcon; } powerChangedCallback; struct { void /* function */ *callback; void *refcon; } scanAsyncCallback; struct { void /* function */ *callback; void *refcon; } extendedLinkCallcback; struct { void /* function */ *callback; void *refcon; } deviceAvailabilityCallback; struct { void /* function */ *callback; void *refcon; } virtualInterfaceStateCallback; } _callbacks;
}

@property (readonly) CWInterface *interface;
@property (readonly) WiFiManagerClientInternal *internalClient;
@property (retain) AWDLServiceDiscoveryManager *awdlServiceManager;
@property (readonly) NSString *interfaceName;
@property struct WiFiDeviceClientInternalCallbacks { struct { void /* function */ *x0; void *x1; } x0; struct { void /* function */ *x0; void *x1; } x1; struct { void /* function */ *x0; void *x1; } x2; struct { void /* function */ *x0; void *x1; } x3; struct { void /* function */ *x0; void *x1; } x4; } *callbacks;

- (void)dealloc;
- (id)interface;
- (struct WiFiDeviceClientInternalCallbacks { struct { void /* function */ *x0; void *x1; } x0; struct { void /* function */ *x0; void *x1; } x1; struct { void /* function */ *x0; void *x1; } x2; struct { void /* function */ *x0; void *x1; } x3; struct { void /* function */ *x0; void *x1; } x4; } *)callbacks;
- (id)initWithClient:(id)a0 interfaceName:(id)a1;

@end
