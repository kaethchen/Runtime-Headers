@class NSIndexSet, NSOutlineView, NSLayoutConstraint;

@interface CSKTextRelationIndicatorTableCellView : NSTableCellView

@property (nonatomic) unsigned long long topConnection;
@property (nonatomic) unsigned long long bottomConnection;
@property (nonatomic) unsigned long long dot;
@property (nonatomic) unsigned long long indentationLevel;
@property (retain, nonatomic) NSIndexSet *backwardIndentationLevelsWithVerticalLine;
@property (retain) NSLayoutConstraint *anchor;
@property (weak, nonatomic) NSOutlineView *outlineView;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)commonInitWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)configureFromDrawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
