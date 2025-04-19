@class PHCollectionList;
@protocol PXFastEnumeration;

@interface PXPhotoKitCollectionListMoveActionPerformer : PXPhotoKitCollectionListActionPerformer {
    PHCollectionList *_collectionList;
    id<PXFastEnumeration> _sourceCollections;
}

+ (BOOL)canPerformOnCollectionList:(id)a0;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 collectionList:(id)a1 parameters:(id)a2;
- (void)performBackgroundTask;

@end
