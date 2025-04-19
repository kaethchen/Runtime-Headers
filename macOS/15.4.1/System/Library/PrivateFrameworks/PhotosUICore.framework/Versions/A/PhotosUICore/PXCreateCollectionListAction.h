@class NSString, PHCollectionList, PXMovingCollectionsUndoContext;
@protocol PXFastEnumeration;

@interface PXCreateCollectionListAction : PXPhotosAction

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) PHCollectionList *parentCollectionList;
@property (readonly, nonatomic) unsigned long long indexInParentCollectionList;
@property (readonly, nonatomic) id<PXFastEnumeration> childCollections;
@property (retain, nonatomic) PXMovingCollectionsUndoContext *undoContext;
@property (copy, nonatomic) NSString *createdCollectionIdentifier;
@property (readonly, nonatomic) PHCollectionList *createdCollectionList;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithTitle:(id)a0 parentCollectionList:(id)a1 childCollections:(id)a2;
- (void)performRedo:(id /* block */)a0;

@end
