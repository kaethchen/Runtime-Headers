@class QCTableView;

@interface QCOpenGLInfoUI : QCInspector {
    QCTableView *tableView;
}

+ (id)viewNibName;

- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)addExtension:(id)a0;
- (void)removeExtension:(id)a0;
- (void)setupViewForPatch:(id)a0;

@end
