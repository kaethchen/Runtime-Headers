@class NSDictionary, NSArray;

@interface LPStaticMedia : NSObject

@property (class, readonly) NSDictionary *contentTypeToSubclassMap;
@property (class, readonly) NSArray *supportedContentTypes;
@property (class, readonly) BOOL hasEmbeddedDeviceTypeRoot;

@property unsigned int ioMedia;

+ (id)allMedia;
+ (id)mediaForPath:(id)a0;
+ (id)liveMediaForSnapshotAtPath:(id)a0;
+ (id)mediaForPath:(id)a0 isSnapshot:(BOOL *)a1;
+ (unsigned int)_copyIOMediaForDiskWithPath:(id)a0;
+ (id)mediaOfCorrectTypeGivenIOMedia:(unsigned int)a0;
+ (unsigned int)_copyLiveFilesystemIOMediaForRootedSnapshot;
+ (id)mediaForBSDNameOrDeviceNode:(id)a0;
+ (id)mediaForPath:(id)a0 snapshotName:(id *)a1;
+ (id)mediaForUUID:(id)a0;
+ (id)snapshotNameForMediaForPath:(id)a0;
+ (void)waitForBlockStorage;
+ (void)waitForIOMediaWithDevNode:(id)a0;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)vendorName;
- (id)content;
- (BOOL)isReadOnly;
- (id)deviceModel;
- (BOOL)isInternal;
- (id)BSDName;
- (id)mountPoint;
- (BOOL)isJournaled;
- (id)mediaUUID;
- (BOOL)isWhole;
- (id)_deviceCharacteristicStringForKey:(id)a0;
- (id)devNodePath;
- (BOOL)getBoolPropertyWithName:(id)a0;
- (id)getPropertyWithName:(id)a0;
- (id)getStringPropertyWithName:(id)a0;
- (id)initWithIOMediaObject:(unsigned int)a0;
- (BOOL)isEmbeddedDeviceTypeRoot;
- (BOOL)isPrimaryMedia;
- (BOOL)setName:(id)a0 withError:(id *)a1;
- (int)storageMedium;
- (id)wholeMediaForMedia;

@end
