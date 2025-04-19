@class NSString, PHCollectionList, PHAssetCollection;

@interface PXCreateSmartAlbumAction : PXPhotosAction

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) PHCollectionList *parentCollectionList;
@property (copy, nonatomic) NSString *createdCollectionIdentifier;
@property (readonly, nonatomic) PHAssetCollection *createdAssetCollection;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithTitle:(id)a0 parentCollectionList:(id)a1;
- (void)performRedo:(id /* block */)a0;

@end
