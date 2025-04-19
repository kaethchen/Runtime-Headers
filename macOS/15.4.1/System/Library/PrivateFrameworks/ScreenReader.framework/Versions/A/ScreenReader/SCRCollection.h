@class SCRSelectionChangeHelper;

@interface SCRCollection : _SCRCollectionSectionBase <SCRSelectionChangeHelperElement>

@property (retain, nonatomic) SCRSelectionChangeHelper *_selectionChangeHelper;

- (void)dealloc;
- (void).cxx_destruct;
- (void)selectionDidChange;
- (unsigned long long)indexOfElement:(id)a0;
- (void)_collectionSelectionDidChange;
- (BOOL)_moveToContentSibling:(id)a0;
- (BOOL)allowFocusThroughSingleChild;
- (unsigned long long)directInteractionArrowCaptureMask;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (id)moveToUIElement:(id)a0 options:(unsigned long long)a1;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)setSingleSelectionWithRequest:(id)a0;
- (BOOL)toggleMultipleSelectionWithRequest:(id)a0;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;

@end
