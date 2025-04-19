@class NSString, NSView, NSSearchField, NSMenuMonotonicVisibleIndexDictionary, NSObject;
@protocol NSMenuVisibleIndexDictionary, NSMenuRepresentationDelegate;

@interface NSTableViewBackedMenuRepresentation : NSTableView <NSTableViewDelegate, NSTableViewDataSource, NSSearchFieldDelegate, NSMenuRepresentable, NSMenuBatchUpdateSupporting> {
    NSObject<NSMenuRepresentationDelegate> *_repDelegate;
    NSSearchField *_filterField;
    NSMenuMonotonicVisibleIndexDictionary *_indexes;
    long long _cachedNumberOfMenuItems;
    unsigned long long _typeSelectBehavior;
    BOOL _isFiltering;
    BOOL _ignoresRowCalls;
    BOOL _isSearchFieldNonEmpty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly) long long numberOfVisibleItems;
@property (readonly) NSView *backingView;
@property (readonly) NSObject<NSMenuVisibleIndexDictionary> *indexes;
@property (weak, nonatomic) NSObject<NSMenuRepresentationDelegate> *representationDelegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_recursiveSetDefaultKeyViewLoop;
- (void)_controlTextDidChangeForTextField:(id)a0 isSwitchingModes:(BOOL)a1;
- (BOOL)_isContainedInMenu;
- (void)_primitiveSetDefaultNextKeyView:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_styleInsets;
- (id)_textFieldResponderOrNil;
- (id)_validateHitTest:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)accessibilityIsIgnored;
- (BOOL)allowsVibrancy;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })apertureFrame;
- (void)beginUpdates;
- (void)controlTextDidChange:(id)a0;
- (void)endSearchQuery;
- (void)endUpdates;
- (void)forEachMenuItemViewAtIndex:(long long)a0 performBlock:(id /* block */)a1;
- (void)forEachSubviewAtMenuIndex:(long long)a0 performBlock:(id /* block */)a1;
- (void)forEachVisibleSubview:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtMenuIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtVisibleIndex:(long long)a0;
- (void)insertArrangedSubviewAtMenuIndex:(long long)a0 forItem:(id)a1;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (long long)menuIndexForView:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)refusesFirstResponder;
- (void)reloadData;
- (void)removeArrangedSubviewAtMenuIndex:(long long)a0;
- (void)setApertureFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0 forMenuItemAtIndex:(long long)a1;
- (void)startSearchQueryWithString:(id)a0 behavior:(long long)a1;
- (id)subviewAtMenuIndex:(long long)a0;
- (id)subviewAtMenuIndex:(long long)a0 creatingIfNeeded:(BOOL)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)updateSizeForItemAtVisibleIndex:(long long)a0;
- (void)updateTrackingAreas;
- (id)viewAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
