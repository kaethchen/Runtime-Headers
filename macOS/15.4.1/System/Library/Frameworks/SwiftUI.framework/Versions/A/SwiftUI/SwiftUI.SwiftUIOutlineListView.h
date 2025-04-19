@class NSMenu;

@interface SwiftUI.SwiftUIOutlineListView : NSOutlineView {
    void /* unknown type, empty encoding */ disableExpandCollapseAnimations;
    void /* unknown type, empty encoding */ customAlternatingBackgroundColors;
    void /* unknown type, empty encoding */ stackBehavior;
    void /* unknown type, empty encoding */ swiftUIDelegate;
    void /* unknown type, empty encoding */ allowsSelectionByIdentity;
    void /* unknown type, empty encoding */ selectionFollowsCursor;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (nonatomic, readonly) BOOL _needsBackgroundFillerView;
@property (nonatomic, readonly) BOOL _needsRubberBandViews;
@property (nonatomic, readonly) BOOL _allowsTextEditingWithoutSelection;
@property (nonatomic, retain) NSMenu *menu;

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })_adjustFrameSizeToFitSuperview:(struct CGSize { double x0; double x1; })a0;
- (void)delete:(id)a0;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)a0;
- (id)_alternatingRowBackgroundColors;
- (BOOL)canDragRowsWithIndexes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)deleteBackward:(id)a0;
- (BOOL)_shouldDelayFirstResponder:(id)a0 forRow:(long long)a1;
- (BOOL)_validatesRowHeight;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityPerformShowMenu;
- (id)accessibilityRoleDescription;
- (void)collapseItem:(id)a0;
- (void)collapseItem:(id)a0 collapseChildren:(BOOL)a1;
- (void)deleteForward:(id)a0;
- (void)deselectAll:(id)a0;
- (void)deselectRow:(long long)a0;
- (void)expandItem:(id)a0;
- (void)expandItem:(id)a0 expandChildren:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)removeItemsAtIndexes:(id)a0 inParent:(id)a1 withAnimation:(unsigned long long)a2;
- (BOOL)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)selectAll:(id)a0;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)viewDidMoveToWindow;

@end
