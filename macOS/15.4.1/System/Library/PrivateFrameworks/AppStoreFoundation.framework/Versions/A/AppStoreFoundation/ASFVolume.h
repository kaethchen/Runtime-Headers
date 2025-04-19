@class SKDisk, NSString;

@interface ASFVolume : NSObject

@property (retain) SKDisk *disk;
@property (readonly) unsigned long long availableSpace;
@property (readonly) NSString *iconFilePath;
@property (readonly) BOOL isAPFS;
@property (readonly) NSString *mountPoint;
@property (readonly) NSString *name;
@property (readonly) NSString *volumeID;

+ (id)_volumeForDisk:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setMountPoint:(id)a0;
- (id)_initWithDisk:(id)a0;
- (id)_initWithSystemDisk:(id)a0 dataDisk:(id)a1;
- (void)expireSpacesCacheWithCompletionHandler:(id /* block */)a0;
- (void)setAsPreferred;
- (void)setVolumeID:(id)a0;

@end
