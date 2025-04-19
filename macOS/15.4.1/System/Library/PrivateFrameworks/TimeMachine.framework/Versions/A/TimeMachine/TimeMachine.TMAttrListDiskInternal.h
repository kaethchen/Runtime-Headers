@class NSString, _TtC11TimeMachine22TMAttrListDiskInternal, NSURL, NSNumber;

@interface TimeMachine.TMAttrListDiskInternal : NSObject <TMAttrListDisk> {
    void /* unknown type, empty encoding */ disk;
}

@property (class, nonatomic, readonly) _TtC11TimeMachine22TMAttrListDiskInternal *bootedDataVolume;

@property (nonatomic, readonly) NSURL *mountPoint;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *userVisibleName;
@property (nonatomic, readonly) NSString *snapshotName;
@property (nonatomic, readonly) NSString *devicePath;
@property (nonatomic, readonly) NSString *liveDiskDevicePath;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) struct fsid { int x0[2]; } fsid;
@property (nonatomic, readonly) NSString *volumeUUID;
@property (nonatomic, readonly) NSString *filesystemTypeName;
@property (nonatomic, readonly) NSNumber *capacity;
@property (nonatomic, readonly) NSNumber *bytesUsed;
@property (nonatomic, readonly) NSNumber *bytesFree;
@property (nonatomic, readonly) NSNumber *quota;
@property (nonatomic, readonly) unsigned long long traits;

+ (id)mountedVolumesAndReturnError:(id *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMountPoint:(id)a0 error:(id *)a1;

@end
