@class SGTSearchField, NSString, SGTSearchFieldCellReserved;

@interface SGTSearchFieldCell : NSSearchFieldCell <NSTokenFieldCellDelegate> {
    SGTSearchFieldCellReserved *_sgtReserved;
}

@property (readonly) SGTSearchField *searchField;
@property BOOL useTokens;
@property (readonly) NSString *untokenizedStringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (void)setStringValue:(id)a0;
- (void)setObjectValue:(id)a0;
- (void)setPlaceholderAttributedString:(id)a0;
- (void)setControlSize:(unsigned long long)a0;
- (void)_searchFieldCancel:(id)a0;
- (id)_searchMenuTemplate;
- (void)_trackButton:(id)a0 forEvent:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 ofView:(id)a3;
- (void)_validateEditing:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilitySizeOfChild:(id)a0;
- (BOOL)allowsEditingTextAttributes;
- (id)fieldEditorForView:(id)a0;
- (id)initTextCell:(id)a0;
- (id)placeholderAttributedString;
- (id)placeholderString;
- (void)setFont:(id)a0;
- (void)setPlaceholderString:(id)a0;
- (id)setUpFieldEditorAttributes:(id)a0;
- (id)tokenFieldCell:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenFieldCell:(id)a0 editingStringForRepresentedObject:(id)a1;
- (id)tokenFieldCell:(id)a0 readFromPasteboard:(id)a1;
- (id)tokenFieldCell:(id)a0 representedObjectForEditingString:(id)a1;
- (id)tokenFieldCell:(id)a0 shouldAddObjects:(id)a1 atIndex:(unsigned long long)a2;
- (id)tokenFieldCell:(id)a0 shouldUseDraggingPasteboardTypes:(id)a1;
- (id)tokenFieldCell:(id)a0 shouldUseReadablePasteboardTypes:(id)a1;
- (id)tokenFieldCell:(id)a0 shouldUseWritablePasteboardTypes:(id)a1;
- (unsigned long long)tokenFieldCell:(id)a0 styleForRepresentedObject:(id)a1;
- (BOOL)tokenFieldCell:(id)a0 writeRepresentedObjects:(id)a1 toPasteboard:(id)a2;
- (void)updateTrackingAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)_forwardTokenFieldCellAction:(id)a0;
- (id)_propertyListFromSuggestions:(id)a0;
- (void)_resetTokens;
- (void)_sgtSearchFieldCellCommonInit;
- (id)_suggestionsFromPropertyList:(id)a0;
- (void)staticSuggestionsDidChange;
- (void)tokenizeWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textView:(id)a1;
- (id)tokenizeWithSuggestion:(id)a0 textView:(id)a1;
- (id)tokenizedSuggestions;

@end
