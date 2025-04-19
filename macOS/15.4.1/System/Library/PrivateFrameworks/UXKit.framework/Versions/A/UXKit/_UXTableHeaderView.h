@class UXLabel, NSBox, UXView;

@interface _UXTableHeaderView : UXCollectionReusableView

@property (nonatomic, getter=isFloating) BOOL floating;
@property (readonly, nonatomic) UXView *contentView;
@property (readonly, nonatomic) UXLabel *titleLabel;
@property (readonly, nonatomic) NSBox *separator;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;

@end
