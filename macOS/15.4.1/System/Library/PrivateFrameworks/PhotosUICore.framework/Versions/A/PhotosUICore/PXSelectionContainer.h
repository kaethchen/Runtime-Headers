@class PXContentPrivacyController, PXSelectionSnapshot, NSUndoManager, NSString, PXSectionedChangeDetailsRepository;
@protocol PXDisplayCollectionFetcher, PXFastEnumeration, PXDisplayCollection;

@interface PXSelectionContainer : NSObject

@property (readonly, nonatomic) long long selectionCount;
@property (readonly, nonatomic) BOOL hasExplicitSelection;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) id<PXDisplayCollection> collection;
@property (readonly, weak, nonatomic) id<PXDisplayCollectionFetcher> collectionFetcher;
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *changeHistory;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedObjects;
@property (readonly, nonatomic) BOOL containsReferencedFileAssets;
@property (readonly, nonatomic) BOOL containsRAWPlusJPEGAssets;
@property (readonly, nonatomic) BOOL containsRAWAssets;
@property (readonly, nonatomic) BOOL containsSpatialAssets;
@property (readonly, nonatomic) BOOL containsSpatialVideoAssets;
@property (readonly, nonatomic) BOOL containsUnsavedContentSyndicationAssets;
@property (readonly, nonatomic) BOOL containsContentSyndicationAssets;
@property (readonly, nonatomic) BOOL containsNonContentSyndicationAssets;
@property (readonly, nonatomic) BOOL containsAssetsWithNonEditableProperties;
@property (readonly, nonatomic) BOOL containsPeople;
@property (readonly, nonatomic) BOOL containsMemories;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedContainedAssets;
@property (readonly, nonatomic) BOOL allowImplicitSelectionForProjectsOrSharing;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedContainedAssetsForProjectsOrSharing;
@property (readonly, nonatomic) id<PXFastEnumeration> allDataSourceObjects;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) PXContentPrivacyController *privacyController;
@property (readonly, copy, nonatomic) NSString *title;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToSelection:(id)a0;
- (BOOL)containsObjectOfClass:(Class)a0 passingTest:(id /* block */)a1;
- (void)enumerateSelectedObjectsOfClass:(Class)a0 usingBlock:(id /* block */)a1;
- (id)firstSelectedObjectOfClass:(Class)a0;
- (BOOL)hasAnyChangesFromSelection:(id)a0;
- (id)initWithCollection:(id)a0 collectionFetcher:(id)a1 undoManager:(id)a2 context:(long long)a3;
- (id)initWithContent:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3;
- (id)initWithContent:(id)a0 undoManager:(id)a1 context:(long long)a2;
- (id)initWithDataSection:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3;
- (id)initWithSelectionSnapshot:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3;
- (id)initWithSelectionSnapshot:(id)a0 collection:(id)a1 undoManager:(id)a2 context:(long long)a3 privacyController:(id)a4 changeHistory:(id)a5;
- (id)initWithSelectionSnapshot:(id)a0 undoManager:(id)a1 context:(long long)a2;
- (id)initWithSelectionSnapshot:(id)a0 undoManager:(id)a1 context:(long long)a2 privacyController:(id)a3;
- (id)selectedContainedAssets:(BOOL)a0;
- (id)selectedContainedAssets:(BOOL)a0 allowedClasses:(id)a1;
- (id)selectedObjects:(BOOL)a0;
- (id)selectedObjectsOfClass:(Class)a0;
- (id)singleSelectedObjectOfClass:(Class)a0;

@end
