@class NSDictionary, NSMutableDictionary, NSDate;

@interface NSFileAttributes : NSDictionary {
    NSMutableDictionary *dict;
    struct stat { int st_dev; unsigned short st_mode; unsigned short st_nlink; unsigned long long st_ino; unsigned int st_uid; unsigned int st_gid; int st_rdev; struct timespec { long long tv_sec; long long tv_nsec; } st_atimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_mtimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_ctimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_birthtimespec; long long st_size; long long st_blocks; int st_blksize; unsigned int st_flags; unsigned int st_gen; int st_lspare; long long st_qspare[2]; } statInfo;
    struct { unsigned int creatorCode; unsigned int fileTypeCode; NSDate *creationDate; struct _fields { unsigned char creatorCode : 1; unsigned char fileTypeCode : 1; unsigned char extensionHidden : 1; unsigned char creationDate : 1; unsigned char fileBusy : 1; unsigned int reserved : 27; } validFields; BOOL extensionHidden; BOOL fileBusy; char _padding[2]; } catInfo;
    NSDictionary *extendedAttrs;
    int fileProtectionClass;
}

+ (id)_attributesAtPath:(id)a0 partialReturn:(BOOL)a1 filterResourceFork:(BOOL)a2 error:(id *)a3;
+ (id)_attributesAtURL:(id)a0 partialReturn:(BOOL)a1 filterResourceFork:(BOOL)a2 error:(id *)a3;
+ (BOOL)_populateCatInfo:(struct { unsigned int x0; unsigned int x1; id x2; struct _fields { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 27; } x3; BOOL x4; BOOL x5; char x6[2]; } *)a0 forURL:(id)a1 statInfo:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a2 error:(id *)a3;
+ (id)attributesAtPath:(id)a0 traverseLink:(BOOL)a1;
+ (id)attributesWithStat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (BOOL)isDirectory;
- (id)fileGroupOwnerAccountName;
- (unsigned long long)fileGroupOwnerAccountNumber;
- (id)fileModificationDate;
- (id)fileOwnerAccountName;
- (unsigned long long)fileOwnerAccountNumber;
- (unsigned long long)filePosixPermissions;
- (unsigned long long)fileSize;
- (unsigned long long)fileSystemFileNumber;
- (long long)fileSystemNumber;
- (id)fileType;

@end
