@class NSString;

@interface TMDADisk : NSObject

@property (readonly) BOOL sharesSpaceWithROSPDataOrSystemVolume;
@property (readonly, copy) NSString *daVolumeName;
@property (readonly, copy) NSString *daBSDName;
@property (readonly, copy) NSString *volumeUUID;

- (void).cxx_destruct;
- (id)initWithMountPoint:(id)a0 traitsSoFar:(unsigned long long)a1 dmManager:(id)a2 apfsManager:(id)a3 error:(id *)a4;
- (id)initWithMountPoint:(id)a0 traitsSoFar:(unsigned long long)a1 error:(id *)a2;

@end
