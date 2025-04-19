@class NSString, NSMutableDictionary, NSArrayController;

@interface IASCommonViewBasedTableDelegate : NSObject <NSTableViewDelegate>

@property (retain) NSMutableDictionary *prototypeCellViews;
@property (weak) NSArrayController *backingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)makeNewCellViewWithIdentifier:(id)a0 forTableView:(id)a1;
- (id)prototypeViewForIdentifier:(id)a0 inTableView:(id)a1;
- (struct CGSize { double x0; double x1; })tableView:(id)a0 sizeOfRow:(long long)a1;
- (double)tableView:(id)a0 widthOfRow:(long long)a1;
- (id)viewIdenfierForTableView:(id)a0 andRow:(long long)a1;

@end
