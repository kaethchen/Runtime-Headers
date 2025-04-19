@class NSScrollView, NSArrayController, NSString, NSTableView;

@interface QComponentTupleSetCellView : NSTableCellView <NSTableViewDelegate>

@property (retain) NSArrayController *tuplesArrayController;
@property (retain) NSTableView *tableView;
@property (retain) NSScrollView *tableScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tuplesArrayKeyPath;

- (void)dealloc;
- (void)setObjectValue:(id)a0;
- (void)awakeFromNib;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (void)profileAddButtonClicked:(id)a0;
- (id)profileMenuForDataType:(int)a0;
- (void)profileRemoveButtonClicked:(id)a0;

@end
