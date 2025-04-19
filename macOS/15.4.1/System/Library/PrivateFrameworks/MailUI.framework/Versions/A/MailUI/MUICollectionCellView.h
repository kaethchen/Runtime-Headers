@class NSViewController, NSLayoutConstraint;

@interface MUICollectionCellView : NSView

@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *midXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *minYConstraint;
@property (readonly, weak, nonatomic) NSViewController *viewController;
@property (nonatomic) unsigned long long cellIndex;
@property (nonatomic) BOOL emphasized;
@property (nonatomic) BOOL focused;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)prepareContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)_enclosingConversationView;
- (void)_muiCollectionCellViewCommonInit;
- (void)collectionView:(id)a0 didBeginScrollInScrollView:(id)a1;
- (void)collectionView:(id)a0 didEndScrollInScrollView:(id)a1;
- (void)collectionView:(id)a0 didScrollInScrollView:(id)a1;

@end
