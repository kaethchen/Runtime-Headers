@interface ASKTableViewEventHandlerDataSource : ASKEventHandlerDataSource

- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 acceptDrop:(id)a1 row:(long long)a2 dropOperation:(unsigned long long)a3;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (unsigned long long)tableView:(id)a0 validateDrop:(id)a1 proposedRow:(long long)a2 proposedDropOperation:(unsigned long long)a3;
- (BOOL)tableView:(id)a0 writeRows:(id)a1 toPasteboard:(id)a2;

@end
