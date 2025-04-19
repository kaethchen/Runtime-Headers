@class NSTextField, NSButton, NSTabView, NSPopUpButton, NSMatrix, QCTableView;

@interface QCSplitterUI : QCInspector {
    NSPopUpButton *classMenu;
    NSTextField *minField;
    NSTextField *maxField;
    NSTabView *propertiesView;
    NSMatrix *indexRadioMatrix;
    NSTabView *indexPropertiesView;
    QCTableView *tableView;
    NSButton *removeButton;
    NSButton *addButton;
    NSTextField *maxIndices;
    NSTextField *minIndices;
}

+ (id)viewNibName;

- (void)setProperty:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)_updateUI:(id)a0;
- (void)_setupUI:(id)a0;
- (void)setupViewForPatch:(id)a0;

@end
