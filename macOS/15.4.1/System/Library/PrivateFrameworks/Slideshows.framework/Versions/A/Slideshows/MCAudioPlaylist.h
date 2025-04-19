@class MCContainer, NSSet, NSArray, NSMutableSet;

@interface MCAudioPlaylist : MCObject {
    NSMutableSet *mSongs;
    NSArray *mCachedOrderedSongs;
}

@property MCContainer *container;
@property (readonly) NSSet *songs;
@property (readonly) NSArray *orderedSongs;
@property (nonatomic) float volume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) float duckLevel;
@property (nonatomic) double duckInDuration;
@property (nonatomic) double duckOutDuration;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)xmlElement;
- (id)imprint;
- (id)addSongForAsset:(id)a0;
- (id)addSongsForAssets:(id)a0;
- (unsigned long long)countOfSongs;
- (void)demolish;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (id)insertSongForAsset:(id)a0 atIndex:(unsigned long long)a1;
- (id)insertSongsForAssets:(id)a0 atIndex:(unsigned long long)a1;
- (void)moveSongsAtIndices:(id)a0 toIndex:(unsigned long long)a1;
- (void)removeAllSongs;
- (void)removeSongsAtIndices:(id)a0;
- (id)songAtIndex:(unsigned long long)a0;

@end
