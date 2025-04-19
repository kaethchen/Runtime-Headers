@class NSString, NSObject;
@protocol AMPSortableContainer;

@interface AMPSortableMenuHandler : NSObject <NSMenuDelegate>

@property (weak, nonatomic) NSObject<AMPSortableContainer> *lastUsedProvider;
@property (nonatomic) BOOL makeMenuPopupCompatible;
@property (weak, nonatomic) NSObject<AMPSortableContainer> *targetedModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)setSortAscending:(id)a0;
- (void)changeSecondarySortOption:(id)a0;
- (void)changeSortOption:(id)a0;
- (id)findCurrentSortableContainer;
- (void)refreshItemsInMenu:(id)a0;
- (void)setSortDescending:(id)a0;
- (void)sortByBaseAction:(id)a0;

@end
