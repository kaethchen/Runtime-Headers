@class QCKeyboardTableView;

@interface QCKeyboardUI : QCInspector {
    QCKeyboardTableView *tableView;
}

+ (id)viewNibName;

- (void)removeKey:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)addKey:(id)a0;
- (void)setupViewForPatch:(id)a0;

@end
