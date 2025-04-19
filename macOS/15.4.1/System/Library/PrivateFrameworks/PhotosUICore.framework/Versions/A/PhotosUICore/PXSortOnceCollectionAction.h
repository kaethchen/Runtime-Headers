@class NSArray, PHFetchResult, PHCollection;

@interface PXSortOnceCollectionAction : PXPhotosAction {
    NSArray *_sortedChildCollections;
}

@property (readonly, nonatomic) PHFetchResult *initialFetchResult;
@property (readonly, nonatomic) NSArray *sortedChildCollections;
@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) long long sortType;

+ (id)assetDateIntervalOfCollection:(id)a0;
+ (BOOL)canPerformOnCollection:(id)a0;
+ (id)collections:(id)a0 sortedByTag:(long long)a1;
+ (id)makeFetchOptionsWithPhotoLibrary:(id)a0;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)initWithCollection:(id)a0 sortType:(long long)a1;
- (id)makeFetchOptions;

@end
