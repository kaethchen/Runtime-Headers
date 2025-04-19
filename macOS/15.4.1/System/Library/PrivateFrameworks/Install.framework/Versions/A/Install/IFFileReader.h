@class NSString;

@interface IFFileReader : NSObject {
    int fileDescriptor;
    long long currentOffset;
    struct stat { int st_dev; unsigned short st_mode; unsigned short st_nlink; unsigned long long st_ino; unsigned int st_uid; unsigned int st_gid; int st_rdev; struct timespec { long long tv_sec; long long tv_nsec; } st_atimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_mtimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_ctimespec; struct timespec { long long tv_sec; long long tv_nsec; } st_birthtimespec; long long st_size; long long st_blocks; int st_blksize; unsigned int st_flags; unsigned int st_gen; int st_lspare; long long st_qspare[2]; } fileStat;
    NSString *filePath;
    BOOL bigEndian;
}

- (void)dealloc;
- (unsigned long long)size;
- (int)fileDescriptor;
- (long long)position;
- (long long)seekTo:(long long)a0;
- (long long)seek:(long long)a0;
- (unsigned short)read16AtOffset:(long long)a0;
- (unsigned long long)read64AtOffset:(long long)a0;
- (unsigned int)read32AtOffset:(long long)a0;
- (BOOL)_readDataAndDeflateWithRawLength:(unsigned long long)a0 andFinalLength:(unsigned long long)a1 intoBuffer:(char *)a2;
- (BOOL)extractDataWithRawLength:(unsigned long long)a0 andFinalLength:(unsigned long long)a1 withCompressionType:(int)a2 fromOffset:(long long)a3 toFd:(int)a4;
- (BOOL)extractInlineCPIOAtOffset:(long long)a0 withLength:(unsigned long long)a1 toPath:(id)a2;
- (id)intWithFile:(id)a0;
- (BOOL)mapDataFromOffset:(long long)a0 withLength:(unsigned long long)a1 intoData:(id *)a2;
- (unsigned short)read16;
- (unsigned int)read32;
- (unsigned long long)read64;
- (unsigned char)read8;
- (unsigned char)read8AtOffset:(long long)a0;
- (void)readDataAsNetworkByteOrder:(BOOL)a0;
- (BOOL)readDataWithRawLength:(unsigned long long)a0 andFinalLength:(unsigned long long)a1 withCompressionType:(int)a2 fromOffset:(long long)a3 intoBuffer:(char *)a4;
- (id)readStringWithLength:(unsigned long long)a0;
- (id)readStringWithLength:(unsigned long long)a0 AtOffset:(long long)a1;

@end
