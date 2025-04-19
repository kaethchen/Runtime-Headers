@class NSString, NSNumber;

@interface TMIOKitDisk : NSObject

@property (class, readonly) NSString *startupVolumeGroupUUID;

@property (readonly) unsigned long long traits;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *volumeUUID;
@property (readonly, copy) NSNumber *volumeRole;
@property (readonly, copy) NSString *volumeGroupUUID;

- (void).cxx_destruct;
- (id)_initWithMountPoint:(id)a0 deviceName:(id)a1 isKnownSystem:(BOOL)a2 error:(id *)a3;
- (id)initWithMountPoint:(id)a0 deviceName:(id)a1 error:(id *)a2;

@end
