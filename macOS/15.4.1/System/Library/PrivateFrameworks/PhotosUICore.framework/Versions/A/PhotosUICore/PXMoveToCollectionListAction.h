@class PHCollectionList, PHFetchResult;
@protocol PXFastEnumeration;

@interface PXMoveToCollectionListAction : PXPhotosAction {
    PHCollectionList *_sourceCollectionList;
    PHFetchResult *_beforeFetchResult;
    PHFetchResult *_afterFetchResult;
}

@property (readonly, nonatomic) PHCollectionList *targetCollectionList;
@property (readonly, nonatomic) id<PXFastEnumeration> movedCollections;

+ (BOOL)canPerformOnCollection:(id)a0;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (long long)adjustedTargetIndexForFetchResult:(id)a0 movedAssets:(id)a1 targetAsset:(id)a2;
- (id)initWithCollections:(id)a0 targetCollectionList:(id)a1;

@end
