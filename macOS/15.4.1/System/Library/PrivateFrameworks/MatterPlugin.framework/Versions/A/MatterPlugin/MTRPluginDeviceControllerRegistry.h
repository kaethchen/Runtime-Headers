@class NSArray, NSMutableArray, NSString;

@interface MTRPluginDeviceControllerRegistry : NSObject <MTRDeviceControllerDelegate>

@property (retain) NSMutableArray *controllerEntities;
@property (readonly, retain) NSArray *controllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)devicesChangedForController:(id)a0;
- (BOOL)addDeviceController:(id)a0;
- (BOOL)addDeviceController:(id)a0 forEntityWithIdentifier:(id)a1;
- (BOOL)removeDeviceController:(id)a0;
- (id)_deviceControllerEntityForIdentifier:(id)a0;
- (void)_forceUpdateRunningModeForController:(id)a0;
- (void)_queryAndUpdateRunningModeForHomeUUID:(id)a0;
- (void)_resumeControllerForPotentialPairing:(id)a0;
- (void)_runningModeChanged:(long long)a0 forHomeUUID:(id)a1;
- (long long)_runningModeForUUID:(id)a0;
- (void)_updateRunningMode:(long long)a0 forceUpdateControllerConfiguration:(BOOL)a1 forHomeUUID:(id)a2;
- (void)_updateRunningModeForAllControllers;
- (void)_updateRunningModeOfAllClientsForHome:(id)a0;
- (void)_updateSuspendedStateBasedOnRunningMode:(id)a0;
- (id)deviceControllerForUUID:(id)a0;

@end
