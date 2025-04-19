@interface POBaseSystemSupport : NSObject

+ (void)enterSandbox:(const char *)a0 sandboxProfileName:(const char *)a1;
+ (BOOL)fvunlockMode;
+ (id)getSystemVolumeUuid;
+ (BOOL)isUserInBackoff:(id)a0;
+ (id)prebootVolumePathForUUID:(id)a0 shouldUnmount:(BOOL *)a1;
+ (id)systemVolumeDiskIdentifierForVolumeGroupIdentifier:(id)a0;

@end
