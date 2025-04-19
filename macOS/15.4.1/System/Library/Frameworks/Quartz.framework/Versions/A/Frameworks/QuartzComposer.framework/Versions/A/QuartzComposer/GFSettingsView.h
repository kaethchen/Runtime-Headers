@class NSCell, NSTextFieldCell, NSView, NSButtonCell, NSTableView, NSPopUpButtonCell, GFList;

@interface GFSettingsView : NSView {
    NSView *_insideView;
    NSTableView *_tableView;
    NSCell *_keyCell;
    NSTextFieldCell *_stringCell;
    NSTextFieldCell *_integerCell;
    NSTextFieldCell *_floatingCell;
    NSButtonCell *_booleanCell;
    NSPopUpButtonCell *_menuCell;
    GFList *_defaults;
    id _delegate;
}

- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)defaults;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (BOOL)tableView:(id)a0 shouldEditTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)setDefaults:(id)a0;
- (id)_defaults;
- (void)_updateDefaults;
- (id)_cellForRow:(long long)a0;
- (void)_finish_initialization;
- (void)reloadSettings;
- (void)removeDefaultForKey:(id)a0;
- (void)setDefault:(id)a0 forKey:(id)a1;

@end
