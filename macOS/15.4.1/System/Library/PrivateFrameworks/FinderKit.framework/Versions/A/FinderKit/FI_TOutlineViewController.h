@class FI_TOutlineViewDataSource, NSString;

@interface FI_TOutlineViewController : FI_IBaseTableViewController <NSOutlineViewDelegate>

@property (readonly, nonatomic) FI_TOutlineViewDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setView:(id)a0;
- (id)outlineView;
- (id)outlineView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (void)outlineViewItemDidCollapse:(id)a0;
- (void)outlineViewItemDidExpand:(id)a0;
- (void)configureView;
- (Class)dataSourceClass;
- (id)outlineViewNoLoad;

@end
