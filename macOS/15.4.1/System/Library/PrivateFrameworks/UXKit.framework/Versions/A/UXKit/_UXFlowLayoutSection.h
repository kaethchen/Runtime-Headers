@class NSDictionary, NSMutableArray, _UXFlowLayoutInfo;

@interface _UXFlowLayoutSection : NSObject {
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _sectionMagins;
    BOOL _isValid;
}

@property (readonly, nonatomic) NSMutableArray *items;
@property (readonly, nonatomic) NSMutableArray *rows;
@property (nonatomic) double verticalInterstice;
@property (nonatomic) double horizontalInterstice;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } sectionMargins;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } footerFrame;
@property (nonatomic) double headerDimension;
@property (nonatomic) double footerDimension;
@property (nonatomic) _UXFlowLayoutInfo *layoutInfo;
@property (retain, nonatomic) NSDictionary *rowAlignmentOptions;
@property (nonatomic) BOOL fixedItemSize;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (readonly, nonatomic) double otherMargin;
@property (readonly, nonatomic) double beginMargin;
@property (readonly, nonatomic) double endMargin;
@property (readonly, nonatomic) double actualGap;
@property (readonly, nonatomic) double lastRowBeginMargin;
@property (readonly, nonatomic) double lastRowEndMargin;
@property (readonly, nonatomic) double lastRowActualGap;
@property (readonly, nonatomic) BOOL lastRowIncomplete;
@property (nonatomic) long long itemsCount;
@property (readonly, nonatomic) long long itemsByRowCount;
@property (readonly, nonatomic) long long indexOfImcompleteRow;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)snapshot;
- (id)addItem;
- (id)addRow;
- (id)copyFromLayoutInfo:(id)a0;
- (void)computeLayout;
- (void)recomputeFromIndex:(long long)a0;

@end
