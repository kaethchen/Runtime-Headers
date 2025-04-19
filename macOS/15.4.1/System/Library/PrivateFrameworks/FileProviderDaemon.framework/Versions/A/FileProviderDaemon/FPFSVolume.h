@class NSString, NSUUID;

@interface FPFSVolume : NSObject {
    struct statfs { unsigned int f_bsize; int f_iosize; unsigned long long f_blocks; unsigned long long f_bfree; unsigned long long f_bavail; unsigned long long f_files; unsigned long long f_ffree; struct fsid { int val[2]; } f_fsid; unsigned int f_owner; unsigned int f_type; unsigned int f_flags; unsigned int f_fssubtype; char f_fstypename[16]; char f_mntonname[1024]; char f_mntfromname[1024]; unsigned int f_flags_ext; unsigned int f_reserved[7]; } _stfs;
}

@property (readonly, nonatomic) int deviceID;
@property (readonly, nonatomic) unsigned long long rootFileID;
@property (readonly, nonatomic) NSString *mountPath;
@property (readonly, nonatomic) NSUUID *eventStreamUUID;

+ (id)eventStreamUUIDForDevice:(int)a0;

- (id)description;
- (id)totalSize;
- (id)freeSize;
- (BOOL)setupForPath:(id)a0 error:(id *)a1;

@end
