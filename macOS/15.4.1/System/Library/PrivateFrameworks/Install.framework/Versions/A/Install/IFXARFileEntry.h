@class NSString, IFXARArchive, NSDictionary;

@interface IFXARFileEntry : IFFileEntry {
    int _compressionType;
    unsigned long long _rawSize;
    long long _rawOffset;
    unsigned long long _size;
    NSString *_path;
    struct stat { int st_dev; unsigned short st_mode; unsigned short st_nlink; unsigned long long st_ino; unsigned int st_uid; unsigned int st_gid; int st_rdev; struct timespec { long long tv_sec; long long tv_nsec; } st_atimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_mtimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_ctimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_birthtimespec; long long st_size; long long st_blocks; int st_blksize; unsigned int st_flags; unsigned int st_gen; int st_lspare; long long st_qspare[2]; } _statInfo;
    IFXARArchive *_archive;
    struct __xar_file_t { } *_file;
    NSDictionary *_rawChecksums;
}

- (void)dealloc;
- (id)path;
- (int)compressionType;
- (unsigned long long)size;
- (id)fileType;
- (unsigned long long)rawSize;
- (long long)rawOffset;
- (id)rawHashForType:(id)a0;
- (id)initWithXARFile:(struct __xar_file_t { } *)a0 withHeapOffset:(long long)a1;
- (struct __xar_file_t { } *)xarFile;
- (void)_printAttributes;
- (BOOL)_retrieveRelavantAttributes;
- (id)rawHashTypes;
- (struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; } *)statInfo;

@end
