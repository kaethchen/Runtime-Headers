@class NSString;

@interface OISFUMoveableFileOutputStream : NSObject <SFUOutputStream> {
    int mFd;
    NSString *mPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (id)path;
- (long long)offset;
- (id)initWithPath:(id)a0;
- (void)flush;
- (id)inputStream;
- (BOOL)canSeek;
- (BOOL)canCreateInputStream;
- (id)closeLocalStream;
- (id)initWithTemporaryFile:(id)a0;
- (BOOL)moveToPath:(id)a0;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)truncateToLength:(long long)a0;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end
