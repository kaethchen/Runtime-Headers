@class NSString, NSURL, NSNumber;

@interface TMStatFSDisk : NSObject

@property (class, readonly) TMStatFSDisk *system;

@property (readonly) unsigned long long traits;
@property (readonly) NSURL *mountPoint;
@property (readonly, copy) NSString *devicePath;
@property (readonly, copy) NSString *deviceName;
@property (readonly) struct fsid { int val[2]; } fsid;
@property (readonly) unsigned int owner;
@property (readonly, copy) NSString *filesystemTypeName;
@property (readonly) unsigned int blockSize;
@property (readonly, copy) NSNumber *capacity;
@property (readonly, copy) NSNumber *bytesFree;
@property (readonly, copy) NSString *snapshotName;
@property (readonly, copy) NSString *liveDiskDevicePath;

+ (id)cached:(id *)a0;
+ (BOOL)enumerateCached:(id *)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithStatfs:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; })a0;
- (id)initWithMountPoint:(id)a0 error:(id *)a1;

@end
