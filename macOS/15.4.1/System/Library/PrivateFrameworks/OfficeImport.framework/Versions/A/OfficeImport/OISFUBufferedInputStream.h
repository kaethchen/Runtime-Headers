@class NSString;
@protocol SFUInputStream;

@interface OISFUBufferedInputStream : NSObject <OISFUBufferedInputStream> {
    id<SFUInputStream> mStream;
    char *mBuffer;
    unsigned long long mBufferSize;
    long long mBufferOffset;
    long long mBufferStart;
    long long mBufferEnd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (long long)offset;
- (id)initWithStream:(id)a0;
- (void)seekToOffset:(long long)a0;
- (BOOL)canSeek;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithStream:(id)a0 bufferSize:(unsigned long long)a1;
- (id)initWithStream:(id)a0 dataLength:(long long)a1;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;
- (unsigned long long)readToOwnBuffer:(const char **)a0 size:(unsigned long long)a1;
- (BOOL)seekWithinBufferToOffset:(long long)a0;

@end
