@class NSColor, NSFont;

@interface AMPDesktopUI.AMPTrackTableHeaderCell : NSTableHeaderCell {
    void /* unknown type, empty encoding */ addSpaceForSort;
    void /* unknown type, empty encoding */ drawSeparator;
    void /* unknown type, empty encoding */ kSeparatorSpace;
    void /* unknown type, empty encoding */ kSeparatorToSortSpace;
    void /* unknown type, empty encoding */ kSeparatorHeight;
}

@property (nonatomic, retain) NSFont *font;
@property (nonatomic, retain) NSColor *textColor;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initTextCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sortIndicatorRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
