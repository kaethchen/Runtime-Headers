@class PHPhotoLibrary, NSDictionary, PHCollectionList;

@interface PXPhotoKitListCellActionManager : PXActionManager

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSDictionary *performerClassByType;
@property (readonly, nonatomic) NSDictionary *mediaTypeActionTypeByGenericType;
@property (readonly, nonatomic) PHCollectionList *collectionList;

- (void).cxx_destruct;
- (id)contextMenuElementsWithHandler:(id /* block */)a0;
- (id)actionPerformerForActionType:(id)a0 parameters:(id)a1;
- (id)actionTypeForGenericType:(id)a0;
- (BOOL)canPerformActionType:(id)a0 assetCollectionReference:(id)a1;
- (id)initWithCollectionList:(id)a0;

@end
