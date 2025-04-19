@class NSString;

@interface NewTabTitlebarButton : NSButton <NSDraggingDestination, NSMenuDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithCoder:(id)a0;
- (void)draggingExited:(id)a0;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (void)concludeDragOperation:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)menuForEvent:(id)a0;
- (void)menuWillOpen:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)_commonNewTabTitlebarButtonInit;
- (unsigned long long)_draggedOperationForDraggingInfo:(id)a0;
- (unsigned long long)_draggedTextOperationForDraggingInfo:(id)a0;
- (unsigned long long)_draggedURLOperationForDraggingInfo:(id)a0;

@end
