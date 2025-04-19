@interface ASKTableViewEventHandlerDelegate : ASKEventHandlerDelegate

- (BOOL)selectionShouldChangeInTableView:(id)a0;
- (void)tableView:(id)a0 didClickTableColumn:(id)a1;
- (void)tableView:(id)a0 didDragTableColumn:(id)a1;
- (void)tableView:(id)a0 mouseDownInHeaderOfTableColumn:(id)a1;
- (BOOL)tableView:(id)a0 shouldEditTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectTableColumn:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;

@end
