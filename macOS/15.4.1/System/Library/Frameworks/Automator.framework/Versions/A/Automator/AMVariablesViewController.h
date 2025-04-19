@class NSTableView, NSArrayController, NSString;
@protocol AMVariableControllerProtocol;

@interface AMVariablesViewController : NSViewController <NSTokenFieldCellDelegate>

@property (weak) NSTableView *_tableView;
@property (weak) NSArrayController *_arrayController;
@property (readonly, weak) NSArrayController *arrayController;
@property (readonly, weak, nonatomic) id<AMVariableControllerProtocol> variableController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)reloadData;
- (BOOL)tableView:(id)a0 acceptDrop:(id)a1 row:(long long)a2 dropOperation:(unsigned long long)a3;
- (unsigned long long)tableView:(id)a0 validateDrop:(id)a1 proposedRow:(long long)a2 proposedDropOperation:(unsigned long long)a3;
- (BOOL)tableView:(id)a0 writeRowsWithIndexes:(id)a1 toPasteboard:(id)a2;
- (BOOL)tokenFieldCell:(id)a0 hasMenuForRepresentedObject:(id)a1;
- (void)selectVariable:(id)a0;
- (void)doDoubleClickInTableView:(id)a0;
- (void)makeNewVariable:(id)a0;

@end
