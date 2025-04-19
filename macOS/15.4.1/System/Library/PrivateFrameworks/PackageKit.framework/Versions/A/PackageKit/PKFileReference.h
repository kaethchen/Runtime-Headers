@class NSString;

@interface PKFileReference : NSObject <NSCopying>

@property (retain, nonatomic) NSString *path;
@property (nonatomic) int parentDeviceId;
@property (nonatomic) unsigned long long parentInode;
@property (nonatomic) int fileDeviceID;
@property (nonatomic) unsigned long long fileInode;

+ (int)_openAndStatParentOfFileAtPath:(id)a0 openOptions:(int)a1 outStatBuf:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a2 error:(id *)a3;
+ (int)_openatAndStatFileAtPath:(id)a0 relativeTo:(int)a1 openOptions:(int)a2 outStatBuf:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a3 error:(id *)a4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPath:(id)a0 parentDeviceID:(int)a1 parentInode:(unsigned long long)a2 fileDeviceID:(int)a3 fileInode:(unsigned long long)a4;

@end
