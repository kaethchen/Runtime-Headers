@class PXUpdater, PXAssetReference, PXAssetsDataSourceManager, PXStoryResourcesDataSourceManager, PXUIMediaProvider, NSString;
@protocol PXStoryClipSpriteReferencesProvider, PXStoryTimeline;

@interface PXStoryOneUpViewModel : PXObservable <PXChangeObserver> {
    struct { BOOL spriteReferenceForClipWithIdentifier; } _spriteReferencesProviderRespondsTo;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;
@property (retain, nonatomic) PXAssetReference *initialAssetReference;
@property (weak, nonatomic) id<PXStoryClipSpriteReferencesProvider> spriteReferencesProvider;
@property (retain, nonatomic) PXAssetReference *visibleAssetReference;
@property (retain, nonatomic) PXAssetReference *hiddenAssetReference;
@property (readonly, nonatomic) PXStoryResourcesDataSourceManager *resourcesDataSourceManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (readonly, nonatomic) id<PXStoryTimeline> timeline;
@property (readonly, nonatomic) long long initialClipIdentifier;
@property (readonly, nonatomic) long long visibleClipIdentifier;
@property (readonly, nonatomic) long long hiddenClipIdentifier;
@property (readonly, nonatomic) BOOL canPresentOneUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setTimeline:(id)a0;
- (void)didPerformChanges;
- (void)_invalidateHiddenClipIdentifier;
- (long long)_clipIdentifierForAssetReference:(id)a0 failureHandler:(id /* block */)a1;
- (void)_invalidateAssetsDataSourceManager;
- (void)_invalidateInitialAssetReference;
- (void)_invalidateVisibleClipIdentifier;
- (void)_updateAssetsDataSourceManager;
- (void)_updateHiddenClipIdentifier;
- (void)_updateInitialAssetReference;
- (void)_updateVisibleClipIdentifier;
- (id)initWithResourcesDataSourceManager:(id)a0 mediaProvider:(id)a1;
- (void)setHiddenClipIdentifier:(long long)a0;
- (void)setInitialClipIdentifier:(long long)a0;
- (void)setVisibleClipIdentifier:(long long)a0;
- (id)spriteReferenceForAssetReference:(id)a0;

@end
