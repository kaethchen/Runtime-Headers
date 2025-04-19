@class NSNumber, NSString;

@interface TMAPFSDisk : NSObject

@property (readonly, copy) NSNumber *volumeRole;
@property (readonly, copy) NSString *volumeGroupUUID;
@property (readonly, copy) NSNumber *bytesUsed;
@property (readonly, copy) NSNumber *bytesFree;
@property (readonly, copy) NSNumber *capacity;
@property (readonly, copy) NSNumber *quota;
@property (readonly, copy) NSNumber *maximumVolumeSize;
@property (readonly, copy) NSString *snapshotUUID;
@property (readonly) unsigned long long snapshotXID;

+ (id)_apfsVolumeGroupUUIDForDevicePath:(id)a0 mountPointPath:(id)a1;
+ (id)_apfsVolumeRoleForDeviceNode:(id)a0 mountPointPath:(id)a1;
+ (unsigned long long)_containerBytesFreeForAPFSVolumeDevicePath:(id)a0;

- (void).cxx_destruct;
- (id)initWithDevicePath:(id)a0 mountPoint:(id)a1 traitsSoFar:(unsigned long long)a2 error:(id *)a3;

@end
