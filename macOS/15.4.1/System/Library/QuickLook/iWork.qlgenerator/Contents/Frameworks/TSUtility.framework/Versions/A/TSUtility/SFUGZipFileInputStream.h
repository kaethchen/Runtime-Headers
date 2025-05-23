@class NSString;

@interface SFUGZipFileInputStream : NSObject <SFUInputStream> {
    int _fd;
    struct gzFile_s { unsigned int x0; char *x1; long long x2; } *_file;
    BOOL _isCachingDisabled;
    long long _offset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (long long)offset;
- (id)initWithPath:(id)a0;
- (void)seekToOffset:(long long)a0;
- (BOOL)canSeek;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;

@end
