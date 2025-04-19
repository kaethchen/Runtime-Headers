@class NSTextField, NSCalendar, NSImageView, NSDate, NSLayoutConstraint;

@interface CUIKDockTileView : NSView {
    NSDate *_date;
    NSCalendar *_calendar;
    NSTextField *_dateView;
    NSTextField *_monthView;
    NSImageView *_imageView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameRect;
    NSLayoutConstraint *_dateViewBaselineToTop;
    NSLayoutConstraint *_dateViewHorizontalAdjustment;
    NSLayoutConstraint *_monthViewBaselineToTop;
    NSLayoutConstraint *_monthViewHeight;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (id)initWithDate:(id)a0 calendar:(id)a1;
- (double)_roundSpecToActual:(double)a0;
- (void)_updateViewContentsAndConstraints;
- (id)dateStringAttributes;
- (id)monthStringAttributesForText:(id)a0;

@end
