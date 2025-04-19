@class NSArray, NSView, NSLayoutConstraint, NSMutableArray;

@interface CalUIRowView : NSView

@property (retain) NSMutableArray *iViews;
@property (retain) NSMutableArray *sortValues;
@property (retain) NSMutableArray *spacingConstraints;
@property (retain) NSMutableArray *baselineConstraints;
@property (retain) NSLayoutConstraint *leadingConstraint;
@property (retain) NSLayoutConstraint *trailingConstraint;
@property (retain) NSView *baselineView;
@property (readonly) NSArray *views;
@property (nonatomic) double spacing;
@property (nonatomic) double padding;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)removeView:(id)a0;
- (void)_addConstraintAtIndex:(unsigned long long)a0;
- (void)_removeConstraintAtIndex:(unsigned long long)a0;
- (void)alignBaselinesToView;
- (void)insertView:(id)a0 withSortValue:(long long)a1;
- (void)removeViewAtIndex:(unsigned long long)a0;
- (void)setBaslineAlignmentView:(id)a0;

@end
