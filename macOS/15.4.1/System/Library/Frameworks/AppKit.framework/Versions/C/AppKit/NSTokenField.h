@class NSCharacterSet;
@protocol NSTokenFieldDelegate;

@interface NSTokenField : NSTextField {
    long long _trackingRectTag;
}

@property (class, readonly) double defaultCompletionDelay;
@property (class, readonly, copy) NSCharacterSet *defaultTokenizingCharacterSet;

@property (weak) id<NSTokenFieldDelegate> delegate;
@property unsigned long long tokenStyle;
@property double completionDelay;
@property (copy) NSCharacterSet *tokenizingCharacterSet;

+ (void)initialize;
+ (BOOL)allowsWritingTools;

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)draggingExited:(id)a0;
- (id)tokenFieldCell:(id)a0 shouldUseDrawingAttributes:(id)a1 forRepresentedObject:(id)a2;
- (BOOL)_baselineIsSpecialCasingForMiniFont;
- (void)_commonInit;
- (void)concludeDragOperation:(id)a0;
- (BOOL)displaysTokenWhileEditing;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)ns_widgetType;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (void)setDisplaysTokenWhileEditing:(BOOL)a0;
- (id)textView:(id)a0 completions:(id)a1 forPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 indexOfSelectedItem:(long long *)a3;
- (id)tokenFieldCell;
- (id)tokenFieldCell:(id)a0 _immediateActionAnimationControllerForRepresentedObject:(id)a1 inTextView:(id)a2;
- (BOOL)tokenFieldCell:(id)a0 characterAtIndex:(unsigned long long)a1 shouldTerminateString:(id)a2;
- (id)tokenFieldCell:(id)a0 completionsForSubstring:(id)a1 indexOfToken:(long long)a2 indexOfSelectedItem:(long long *)a3;
- (id)tokenFieldCell:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenFieldCell:(id)a0 editingStringForRepresentedObject:(id)a1;
- (BOOL)tokenFieldCell:(id)a0 hasMenuForRepresentedObject:(id)a1;
- (id)tokenFieldCell:(id)a0 menuForRepresentedObject:(id)a1;
- (id)tokenFieldCell:(id)a0 readFromPasteboard:(id)a1;
- (id)tokenFieldCell:(id)a0 representedObjectForEditingString:(id)a1;
- (id)tokenFieldCell:(id)a0 setUpTokenAttachmentCell:(id)a1 forRepresentedObject:(id)a2;
- (id)tokenFieldCell:(id)a0 shouldAddObjects:(id)a1 atIndex:(unsigned long long)a2;
- (unsigned long long)tokenFieldCell:(id)a0 styleForRepresentedObject:(id)a1;
- (id)tokenFieldCell:(id)a0 tooltipStringForRepresentedObject:(id)a1;
- (BOOL)tokenFieldCell:(id)a0 writeRepresentedObjects:(id)a1 toPasteboard:(id)a2;
- (BOOL)wantsPeriodicDraggingUpdates;

@end
