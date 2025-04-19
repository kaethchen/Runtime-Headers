@class NSSet, NSMutableSet;

@interface MCAssetAudio : MCAsset {
    NSMutableSet *mSongs;
}

@property (readonly) NSSet *songs;

- (BOOL)isInUse;
- (void)addSong:(id)a0;
- (void)demolish;
- (void)removeSong:(id)a0;

@end
