@class NSNumber;

@interface TMOtherIODisk : NSObject

@property (readonly) unsigned long long traits;
@property (readonly, copy) NSNumber *containerBytesFree;
@property (readonly) unsigned long long snapshotXID;

+ (id)_containerBytesFreeForAPFSVolumeDevicePath:(id)a0;

- (void).cxx_destruct;
- (id)initWithMountPoint:(id)a0 devicePath:(id)a1 traitsSoFar:(unsigned long long)a2 error:(id *)a3;

@end
