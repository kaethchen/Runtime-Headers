@class NSCharacterSet;
@protocol NSTokenFieldCellDelegate;

@interface NSTokenFieldCell : NSTextFieldCell {
    NSCharacterSet *_tokenizingCharacterSet;
    id _delegate;
    double _completionDelay;
    id _cache;
    id _defaultTerminator;
    id _trackingArea;
    id _lastCell;
    id _lastTextViewportElementView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastCellFrame;
    BOOL *_autoCompleteCancel;
    struct { unsigned char _style : 4; unsigned char _invalidCache : 1; unsigned char _inDidChange : 1; unsigned char _validationDisabled : 1; unsigned char _reserved1 : 1; unsigned char _autoCompleteMode : 2; unsigned char _inValidateEditing : 1; unsigned char _performingDrop : 1; unsigned int _reserved : 20; } _tfcFlags;
}

@property (class, readonly) double defaultCompletionDelay;
@property (class, readonly, copy) NSCharacterSet *defaultTokenizingCharacterSet;

@property unsigned long long tokenStyle;
@property double completionDelay;
@property (copy) NSCharacterSet *tokenizingCharacterSet;
@property (weak) id<NSTokenFieldCellDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAlignment:(long long)a0;
- (void)setBaseWritingDirection:(long long)a0;
- (void)setObjectValue:(id)a0;
- (void)setLineBreakMode:(unsigned long long)a0;
- (id)_textAttributes;
- (BOOL)_performingDrop;
- (void)setControlSize:(unsigned long long)a0;
- (id)_attributedStringForRepresentedObjects:(id)a0;
- (BOOL)_characterAtIndex:(unsigned long long)a0 shouldTerminateString:(id)a1;
- (void)_concludeTracking;
- (id)_defaultPlaceholderString;
- (id)_defaultTokenizingCharacter;
- (id)_formatObjectValue:(id)a0 invalid:(BOOL)a1;
- (BOOL)_hasAttributedStringValue;
- (BOOL)_objectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)_representedObjectsForString:(id)a0 andAttributedString:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_selectOrEdit:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inView:(id)a1 target:(id)a2 editor:(id)a3 event:(id)a4 start:(long long)a5 end:(long long)a6;
- (void)_setEditingTextView:(id)a0;
- (void)_setPerformingDrop:(BOOL)a0;
- (BOOL)_skipsSynchronizationForEditingTextView:(id)a0;
- (id)_stringForRepresentedObjects:(id)a0;
- (id)_textStorage:(id)a0 shouldUseSelectedTextAttributes:(id)a1 atCharacterIndex:(unsigned long long)a2 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (BOOL)_tokenizeCharactersAdjacentToSelectionForTextView:(id)a0 terminatorsNeeded:(BOOL)a1;
- (long long)_typesetterBehavior;
- (id)_unformattedAttributedStringValue:(id)a0;
- (void)_validateEditing:(id)a0;
- (id)acceptableDragTypes;
- (id)accessibilityValueAttribute;
- (BOOL)allowsEditingTextAttributes;
- (BOOL)allowsEditingTokens;
- (BOOL)autoValidationDisabled;
- (unsigned long long)draggingEntered:(id)a0;
- (id)fieldEditorForView:(id)a0;
- (BOOL)hasMenuForTokenAttachment:(id)a0;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;
- (id)layoutManager:(id)a0 shouldUseSelectedTextAttributes:(id)a1 atCharacterIndex:(unsigned long long)a2 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (id)menuForTokenAttachment:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForUserCompletion;
- (void)setAutoValidationDisabled:(BOOL)a0;
- (void)setFont:(id)a0;
- (void)setScrollable:(BOOL)a0;
- (void)setTextColor:(id)a0;
- (id)setUpFieldEditorAttributes:(id)a0;
- (id)setUpTokenAttachmentCell:(id)a0 forRepresentedObject:(id)a1;
- (void)setWraps:(BOOL)a0;
- (void)textDidChange:(id)a0;
- (id)textView:(id)a0 completions:(id)a1 forPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 indexOfSelectedItem:(long long *)a3;
- (id)textView:(id)a0 shouldChangeTypingAttributes:(id)a1 toAttributes:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textView:(id)a0 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 toCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)tokenAttachment:(id)a0 _immediateActionAnimationControllerForRepresentedObject:(id)a1 inTextView:(id)a2;
- (BOOL)tokenAttachment:(id)a0 doubleClickedInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 atCharacterIndex:(unsigned long long)a3;
- (id)tokenAttachment:(id)a0 shouldUseTokenAttachmentCell:(id)a1;
- (BOOL)tokenTextView:(id)a0 readSelectionFromPasteboard:(id)a1 type:(id)a2;
- (id)tokenTextView:(id)a0 shouldUseDraggingPasteboardTypes:(id)a1;
- (id)tokenTextView:(id)a0 shouldUseReadablePasteboardTypes:(id)a1;
- (id)tokenTextView:(id)a0 shouldUseWritablePasteboardTypes:(id)a1;
- (BOOL)tokenTextView:(id)a0 writeSelectionToPasteboard:(id)a1 type:(id)a2;
- (void)updateTrackingAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
