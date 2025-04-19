@class NSString;

@interface PGMusicCurationRecentlyUsedSongs : NSObject {
    void /* unknown type, empty encoding */ mostRecentlyUsedSongIDDateMap;
    void /* unknown type, empty encoding */ recentlyUsedToExclude;
}

@property (nonatomic, readonly) NSString *description;

+ (id)recentlyUsedFlexMusicSongsForCollectionsFromPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)recentlyUsedAppleMusicSongsForCollectionsFromPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)recentlyUsedAppleMusicSongsFromPhotoLibrary:(id)a0;
+ (id)recentlyUsedFlexMusicSongsFromPhotoLibrary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)allEntries;
- (void)addFlexMusicCuration:(id)a0 date:(id)a1;
- (void)addMusicCuration:(id)a0 date:(id)a1;
- (void)addSongIDs:(id)a0 date:(id)a1;
- (void)addWithSongIDDateMap:(id)a0;
- (void)appendWithOtherRecentlyUsed:(id)a0;

@end
