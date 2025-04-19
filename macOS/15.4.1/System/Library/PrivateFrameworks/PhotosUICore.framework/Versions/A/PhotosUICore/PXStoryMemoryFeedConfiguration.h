@class PHPhotoLibrary;

@interface PXStoryMemoryFeedConfiguration : PXFeedConfiguration

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (void)_handleContentSeenForDataSource:(id)a0;
+ (id)_photoKitMediaProviderWithPhotoLibrary:(id)a0;

- (void).cxx_destruct;
- (id)viewControllerTitle;
- (id)_defaultSpecManagerWithLayoutKind:(long long)a0 extendedTraitCollection:(id)a1;
- (BOOL)_shouldEmbedContentLayoutForLayoutKind:(long long)a0;
- (BOOL)allowsPopOnEmptyBehavior;
- (id)copyWithLayoutKind:(long long)a0;
- (void)handleContentSeen;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 layoutKind:(long long)a1 photoLibrary:(id)a2 viewControllerSetupBlock:(id /* block */)a3;
- (id)initWithMemoriesInPhotoLibrary:(id)a0 layoutKind:(long long)a1 viewControllerSetupBlock:(id /* block */)a2;
- (id)initWithMemoriesInPhotoLibrary:(id)a0 layoutKind:(long long)a1 viewControllerSetupBlock:(id /* block */)a2 visibleRectChangeObserver:(id /* block */)a3;
- (id)initWithSyntheticSectionCount:(long long)a0 numberOfItemsPerSection:(long long)a1 photoLibrary:(id)a2 layoutKind:(long long)a3;
- (id)objectReferenceForDestination:(id)a0;
- (BOOL)wantsEmbeddedScrollView;

@end
