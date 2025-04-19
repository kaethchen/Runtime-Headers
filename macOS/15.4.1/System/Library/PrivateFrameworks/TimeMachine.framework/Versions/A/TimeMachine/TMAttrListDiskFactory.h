@protocol TMAttrListDisk;

@interface TMAttrListDiskFactory : NSObject

@property (class, readonly) id<TMAttrListDisk> bootedDataVolume;

+ (id)attrVolumeWithMountPoint:(id)a0 error:(id *)a1;
+ (id)mountedVolumes:(id *)a0;

@end
