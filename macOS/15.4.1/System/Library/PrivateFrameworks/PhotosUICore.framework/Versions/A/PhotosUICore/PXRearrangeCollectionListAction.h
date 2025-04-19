@class PHCollectionList, PHCollection, PHFetchResult;
@protocol PXFastEnumeration;

@interface PXRearrangeCollectionListAction : PXPhotosAction {
    PHFetchResult *_beforeFetchResult;
    PHFetchResult *_afterFetchResult;
}

@property (readonly, nonatomic) PHCollectionList *collectionList;
@property (readonly, nonatomic) id<PXFastEnumeration> movedCollections;
@property (readonly, nonatomic) PHCollection *targetCollection;

+ (BOOL)canPerformOnCollection:(id)a0;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (BOOL)_canPerformUndo;
- (id)actionNameLocalizationKey;
- (long long)adjustedTargetIndexForFetchResult:(id)a0 movedAssets:(id)a1 targetAsset:(id)a2;
- (id)initWithCollectionList:(id)a0 movedCollections:(id)a1 targetCollection:(id)a2;
- (id)standardFetchOptions;

@end
