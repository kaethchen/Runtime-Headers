@class NSArray;

@interface PhotosUICore.StoryPassthroughMusicCurationProvider : _TtCs12_SwiftObject <PXStoryMusicCurationProvider> {
    void /* unknown type, empty encoding */ appleMusicCuration;
    void /* unknown type, empty encoding */ recentlyUsedFlexSongIDs;
    void /* unknown type, empty encoding */ recentlyUsedAppleMusicSongIDs;
}

@property (nonatomic, copy) NSArray *recentlyUsedFlexSongIDs;
@property (nonatomic, copy) NSArray *recentlyUsedAppleMusicSongIDs;

- (void)applyNegativeFeedbackToSong:(id)a0 forAssetContainer:(id)a1;
- (id)requestMusicCurationForAssetContainer:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)updateAudioAsset:(id)a0 forAssetContainer:(id)a1;

@end
