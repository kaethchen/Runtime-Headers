@interface BYUtilities : NSObject

+ (id)hardwareModelString;
+ (BOOL)ssoFrameworkAvailable;
+ (id)groupUUIDForVolumeAtMountPoint:(id)a0;
+ (id)systemVolumeWithGroupUUID:(id)a0;
+ (BOOL)boolForIONode:(id)a0 key:(id)a1;
+ (id)dataForIONode:(id)a0 key:(id)a1;
+ (id)getSSOTicketWithUI:(BOOL)a0 error:(id *)a1;
+ (id)hexStringFromBytes:(const char *)a0 size:(unsigned long long)a1;
+ (id)restoreVersionFromPath:(id)a0;
+ (BOOL)securityModeFromOptions:(id)a0 securityMode:(unsigned int *)a1;
+ (id)stringForKeyPath:(id)a0 inDictionary:(id)a1;
+ (id)stringForSystemNVRAMKey:(id)a0;
+ (id)temporaryMountPathWithLabel:(id)a0;

@end
