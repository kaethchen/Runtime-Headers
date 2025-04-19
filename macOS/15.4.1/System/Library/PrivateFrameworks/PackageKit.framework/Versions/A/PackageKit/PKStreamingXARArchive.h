@class NSString, NSMutableDictionary, NSFileHandle;

@interface PKStreamingXARArchive : PKXARArchive {
    NSMutableDictionary *_streamingState;
    NSFileHandle *_underlyingArchiveFileHandle;
    NSString *_underlyingArchiveFileName;
}

+ (BOOL)_createStreamingPlaceholderAtPath:(id)a0 md5Hashes:(id)a1 hashedChunkSize:(unsigned long long)a2 resumptionOffset:(unsigned long long *)a3 error:(id *)a4;
+ (BOOL)_streamingPlaceholderExistsAtPath:(id)a0 md5Hashes:(id)a1 hashedChunkSize:(unsigned long long)a2;
+ (id)_streamingPlaceholderStateAtPath:(id)a0;
+ (void)_writeSteamingPlaceholderState:(id)a0 atPath:(id)a1;

- (void)dealloc;
- (BOOL)isFinished;
- (BOOL)isSuspended;
- (void)setFinished:(BOOL)a0;
- (void)setSuspended:(BOOL)a0;
- (unsigned long long)resumptionOffset;
- (void)setResumptionOffset:(unsigned long long)a0;
- (unsigned long long)hashedChunkSize;
- (id)finishStream;
- (id)initForReadingFromPath:(id)a0 options:(id)a1;
- (id)_createOrOpenFileForUpdatingAtPath:(id)a0 error:(id *)a1;
- (id)_underlyingArchivePath;
- (BOOL)_verifyMD5Hash:(id)a0 forByteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (id)initForReadingFromPath:(id)a0;
- (id)md5Hashes;
- (id)supplyBytes:(id)a0;
- (id)suspendStream;

@end
