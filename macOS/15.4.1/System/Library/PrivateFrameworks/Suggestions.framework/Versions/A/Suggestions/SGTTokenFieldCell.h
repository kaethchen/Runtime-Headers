@class SGTSearchFieldCell;

@interface SGTTokenFieldCell : NSTokenFieldCell

@property (weak) SGTSearchFieldCell *searchFieldCell;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_defaultPlaceholderString;
- (BOOL)_isEditingTextView:(id)a0;
- (id)_searchField;
- (id)_stringForRepresentedObjects:(id)a0;
- (id)controlView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)fieldEditorForView:(id)a0;
- (BOOL)hasMenuForTokenAttachment:(id)a0;
- (id)menuForTokenAttachment:(id)a0;
- (void)mouseMoved:(id)a0;
- (id)setUpTokenAttachmentCell:(id)a0 forRepresentedObject:(id)a1;
- (BOOL)tokenAttachment:(id)a0 doubleClickedInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 atCharacterIndex:(unsigned long long)a3;
- (BOOL)tokenTextView:(id)a0 writeSelectionToPasteboard:(id)a1 type:(id)a2;
- (id)_sgt_representedObjectsForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
