@class NSSet, PXStoryModel;
@protocol PXStorySongResource;

@interface PXStorySongController : PXStoryController

@property (retain, nonatomic) id<PXStorySongResource> currentSongResource;
@property (nonatomic) double failedSongDelayBeforeSwitchingToFallback;
@property (readonly, weak, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) NSSet *failedAudioAssets;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)mutableChangeObject;
- (void)_invalidateCurrentSongResource;
- (void)_updateCurrentSongResource;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;
- (void)setFailedAudioAssets:(id)a0;

@end
