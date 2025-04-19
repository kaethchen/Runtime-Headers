@class NSArray;
@protocol PXFastEnumeration;

@interface PXDeleteCollectionsAction : PXPhotosAction {
    NSArray *_assetCollections;
    NSArray *_collectionLists;
    id<PXFastEnumeration> _collections;
}

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (id)collections;
- (id)initWithCollections:(id)a0;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (void)performRedo:(id /* block */)a0;

@end
