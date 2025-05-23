@class NSString;

@interface OISFUGZipFileOutputStream : NSObject <SFUOutputStream> {
    struct gzFile_s { unsigned int x0; char *x1; long long x2; } *_file;
    long long _offset;
    NSString *_path;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gzipExtension;

- (void)dealloc;
- (void)close;
- (id)path;
- (long long)offset;
- (id)initWithPath:(id)a0;
- (id)inputStream;
- (BOOL)canSeek;
- (BOOL)canCreateInputStream;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
