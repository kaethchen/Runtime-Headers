@class NSString, HMDDeviceController;

@interface HMDAppleMediaAccessoryDependencyFactory : NSObject <HMDAppleMediaAccessoryDependencyFactory>

@property (readonly) HMDDeviceController *deviceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)deviceWithAddress:(id)a0;
- (id)accountManagerForAccessory:(id)a0;
- (id)darwinNotificationProviderForAccessory:(id)a0;
- (id)deviceControllerWithDevice:(id)a0;
- (id)deviceControllerWithDeviceIdentifier:(id)a0;
- (id)deviceForIDSIdentifier:(id)a0;
- (id)siriServer;
- (id)symptomsHandlerForAccessory:(id)a0;

@end
