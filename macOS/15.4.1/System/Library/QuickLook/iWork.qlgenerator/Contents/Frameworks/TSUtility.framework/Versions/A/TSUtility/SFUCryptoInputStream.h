@class NSString, SFUCryptor;
@protocol SFUInputStream;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
    id<SFUInputStream> mBaseStream;
    SFUCryptor *mCryptor;
    long long mOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (long long)offset;
- (void)seekToOffset:(long long)a0;
- (BOOL)canSeek;
- (id)closeLocalStream;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initForDecryptionWithInputStream:(id)a0 key:(id)a1;
- (unsigned long long)readToBuffer:(char *)a0 size:(unsigned long long)a1;

@end
