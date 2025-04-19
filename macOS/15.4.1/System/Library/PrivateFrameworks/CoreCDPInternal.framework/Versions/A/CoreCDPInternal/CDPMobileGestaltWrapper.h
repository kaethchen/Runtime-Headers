@class NSString;

@interface CDPMobileGestaltWrapper : NSObject <CDPDeviceCapabilityProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportsMesa;
- (BOOL)supportsPearl;

@end
