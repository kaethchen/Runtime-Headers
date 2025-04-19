@interface RTPlatform_OSX : RTPlatform

- (id)deviceClass;
- (BOOL)internalInstall;
- (BOOL)macOSPlatform;
- (BOOL)supportsCoreRoutineCapability;
- (BOOL)supportsMultiUser;
- (id)systemModel;
- (id)userAssignedDeviceName;

@end
