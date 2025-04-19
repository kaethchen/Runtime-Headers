@class NSIndexSet, PHFetchResult, PHCollectionList, PXMovingCollectionsUndoContext;
@protocol PXFastEnumeration;

@interface PXEditChildCollectionsAction : PXPhotosAction

@property (readonly, nonatomic) id<PXFastEnumeration> collectionsToAdd;
@property (readonly, nonatomic) id<PXFastEnumeration> collectionsToRemove;
@property (readonly, nonatomic) PXMovingCollectionsUndoContext *collectionsToAddUndoContext;
@property (readonly, nonatomic) NSIndexSet *collectionsToRemoveUndoIndexes;
@property (retain, nonatomic) PHFetchResult *collectionListUndoFetchResult;
@property (readonly, nonatomic) PHCollectionList *collectionList;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithCollectionList:(id)a0 childCollections:(id)a1;

@end
