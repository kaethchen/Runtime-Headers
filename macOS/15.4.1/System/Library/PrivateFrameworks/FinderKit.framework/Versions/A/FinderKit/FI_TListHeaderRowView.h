@class NSTrackingArea, FI_TListHeaderCellView, NSMutableArray, NSObject;
@protocol TListHeaderRowViewDelegate;

@interface FI_TListHeaderRowView : NSTableRowView {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _node;
    long long _columnBeingDragged;
    FI_TListHeaderCellView *_cellViewForDrag;
    NSMutableArray *_cellViews;
    NSTrackingArea *_headerTrackingArea;
    BOOL _isCursorOverDivider;
    struct TNSWeakPtr<NSObject<TListHeaderRowViewDelegate>> { NSObject<TListHeaderRowViewDelegate> *fWeakObject; } _delegate;
}

@property (nonatomic) double tableInset;
@property (readonly, weak, nonatomic) NSObject<TListHeaderRowViewDelegate> *delegate;
@property (nonatomic) long long sortColumnIndex;
@property (nonatomic, getter=isSortAscending) BOOL sortAscending;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id).cxx_construct;
- (void)layout;
- (void)rightMouseDown:(id)a0;
- (void)handleMouseDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)performLayout;
- (void)setFloating:(BOOL)a0;
- (void)updateLayer;
- (void)setNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (long long)mouseInDivider:(id)a0;
- (void)updateCellViews;
- (id)columnForDivider:(long long)a0;
- (id)firstRowViewIfAvailable;
- (id)initAsGroupHeader:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 node:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 delegate:(id)a2;
- (BOOL)isGroupHeader;
- (void)performUpdateLayer;
- (void)setNeedsDisplayForColumn:(long long)a0 draggedDelta:(double)a1;
- (void)updateCursor:(id)a0;

@end
