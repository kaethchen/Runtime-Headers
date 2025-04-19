@class PHCollection;
@protocol PXFastEnumeration;

@interface PXPhotoKitCollectionListRearrangeActionPerformer : PXPhotoKitCollectionListActionPerformer {
    id<PXFastEnumeration> _sourceCollections;
    PHCollection *_targetCollection;
}

+ (BOOL)canPerformOnCollectionList:(id)a0;

- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 collectionList:(id)a1 parameters:(id)a2;
- (void)performBackgroundTask;

@end
