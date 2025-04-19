@class NSArray, TMDisk;

@interface TMFirmLinkMap : NSObject {
    struct _fakelink_group { } *_group;
}

@property (class, readonly, retain) TMFirmLinkMap *currentRootFirmLinkMap;

@property (readonly, copy) TMDisk *systemDisk;
@property (readonly, copy) TMDisk *dataDisk;
@property (readonly, copy) NSArray *virtualLinksOnSystemVolume;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSystemDisk:(id)a0 dataDisk:(id)a1 firmLinkManifest:(id)a2 syntheticManifest:(id)a3;
- (id)absolutePathOnDataVolumeByResolvingFirmLinkInPath:(id)a0;
- (id)firmLinkedPathByUnresolvingAbsolutePathOnDataVolume:(id)a0;
- (id)initWithMountPoint:(id)a0;

@end
