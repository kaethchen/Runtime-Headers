@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface MPSongManager : NSObject {
    NSMutableDictionary *mSongDescriptions;
    NSMutableDictionary *mSongBeats;
    NSMutableDictionary *mSongMetaData;
    NSString *mSongCacheFilePath;
    NSRecursiveLock *mSongLock;
    void *mDaFunc;
}

+ (id)sharedManager;
+ (void)releaseSharedManager;

- (void)dealloc;
- (id)init;
- (id)initWithPaths:(id)a0;
- (id)beatsForSongAtPath:(id)a0 progressCallback:(void /* function */ *)a1 context:(void *)a2;
- (id)cachedBeatsForSongAtPath:(id)a0;
- (short)copyWaveformForSongAtPath:(id)a0 withFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1 samples:(void **)a2 numberOfFrames:(long long *)a3;
- (id)descriptionForSongAtPath:(id)a0 progressCallback:(void /* function */ *)a1 context:(void *)a2;
- (id)descriptionForSongsAtPaths:(id)a0 progressCallback:(void /* function */ *)a1 context:(void *)a2;
- (BOOL)hasBeatsForSongAtPath:(id)a0;
- (id)qt32Server;
- (id)songMetadataForPath:(id)a0;
- (void)storeBeats:(id)a0 forPath:(id)a1;

@end
