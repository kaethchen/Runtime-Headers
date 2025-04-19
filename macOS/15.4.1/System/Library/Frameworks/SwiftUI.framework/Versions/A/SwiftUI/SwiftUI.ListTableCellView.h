@class NSArray;

@interface SwiftUI.ListTableCellView : NSTableCellView {
    void /* unknown type, empty encoding */ selectionBehavior;
    void /* unknown type, empty encoding */ secondaryBehavior;
    void /* unknown type, empty encoding */ secondaryNavigationBehavior;
    void /* unknown type, empty encoding */ dropCountSeed;
    void /* unknown type, empty encoding */ viewListID;
    void /* unknown type, empty encoding */ preview;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ enclosingTableView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ activeTracker;
}

@property (nonatomic) long long rowSizeStyle;
@property (nonatomic, readonly) double firstBaselineOffsetFromTop;
@property (nonatomic, readonly) NSArray *draggingImageComponents;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
