@class PHCollection, PHFetchResult;

@interface PXSortCollectionAction : PXPhotosAction

@property (readonly, nonatomic) struct PXSortCollectionActionSortType { unsigned int sortKey; BOOL ascending; } sortType;
@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) PHFetchResult *originalCollectionContent;
@property (readonly, nonatomic) struct PXSortCollectionActionSortType { unsigned int sortKey; BOOL ascending; } originalSortType;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (void)_performPeopleVirtualCollectionActionWithCompletion:(id /* block */)a0;
- (id)initWithCollection:(id)a0 sortType:(struct PXSortCollectionActionSortType { unsigned int x0; BOOL x1; })a1;
- (void)performChangeToSortType:(struct PXSortCollectionActionSortType { unsigned int x0; BOOL x1; })a0 completeCallback:(id /* block */)a1;

@end
