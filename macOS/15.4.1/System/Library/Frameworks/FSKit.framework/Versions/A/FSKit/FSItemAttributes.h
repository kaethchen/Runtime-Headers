@interface FSItemAttributes : NSObject <NSSecureCoding> {
    struct _LIFileAttributes { unsigned long long __fa_rsvd0; unsigned long long fa_validmask; unsigned long long fa_seqno; unsigned int fa_type; unsigned int fa_mode; unsigned int fa_nlink; unsigned int fa_uid; unsigned int fa_gid; unsigned int fa_bsd_flags; unsigned long long fa_size; unsigned long long fa_allocsize; unsigned long long fa_fileid; unsigned long long fa_parentid; struct timespec { long long tv_sec; long long tv_nsec; } fa_atime; struct timespec { long long tv_sec; long long tv_nsec; } fa_mtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_ctime; struct timespec { long long tv_sec; long long tv_nsec; } fa_birthtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_backuptime; struct timespec { long long tv_sec; long long tv_nsec; } fa_addedtime; unsigned int fa_int_flags; unsigned int _pad0; } attrs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned int gid;
@property (nonatomic) unsigned int mode;
@property (nonatomic) long long type;
@property (nonatomic) unsigned int linkCount;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long allocSize;
@property (nonatomic) unsigned long long fileID;
@property (nonatomic) unsigned long long parentID;
@property (nonatomic) BOOL supportsLimitedXAttrs;
@property (nonatomic) BOOL inhibitKernelOffloadedIO;
@property (nonatomic) struct timespec { long long x0; long long x1; } modifyTime;
@property (nonatomic) struct timespec { long long x0; long long x1; } addedTime;
@property (nonatomic) struct timespec { long long x0; long long x1; } changeTime;
@property (nonatomic) struct timespec { long long x0; long long x1; } accessTime;
@property (nonatomic) struct timespec { long long x0; long long x1; } birthTime;
@property (nonatomic) struct timespec { long long x0; long long x1; } backupTime;

+ (id)requestWithData:(id)a0;
+ (id)requestWithLIAttributes:(const struct _LIFileAttributes { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; struct timespec { long long x0; long long x1; } x13; struct timespec { long long x0; long long x1; } x14; struct timespec { long long x0; long long x1; } x15; struct timespec { long long x0; long long x1; } x16; struct timespec { long long x0; long long x1; } x17; struct timespec { long long x0; long long x1; } x18; unsigned int x19; unsigned int x20; } *)a0;

- (id)init;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid:(long long)a0;
- (unsigned int)internalFlags;
- (void)setInternalFlags:(unsigned int)a0;
- (id)attrsData;
- (void)getLIAttributes:(struct _LIFileAttributes { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; struct timespec { long long x0; long long x1; } x13; struct timespec { long long x0; long long x1; } x14; struct timespec { long long x0; long long x1; } x15; struct timespec { long long x0; long long x1; } x16; struct timespec { long long x0; long long x1; } x17; struct timespec { long long x0; long long x1; } x18; unsigned int x19; unsigned int x20; } *)a0;
- (id)initWithLIAttributes:(const struct _LIFileAttributes { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; struct timespec { long long x0; long long x1; } x13; struct timespec { long long x0; long long x1; } x14; struct timespec { long long x0; long long x1; } x15; struct timespec { long long x0; long long x1; } x16; struct timespec { long long x0; long long x1; } x17; struct timespec { long long x0; long long x1; } x18; unsigned int x19; unsigned int x20; } *)a0;
- (void)invalidateAllProperties;
- (void)setAttributeSeqno:(unsigned long long)a0;

@end
