@class UXLabel, NSMutableArray, UXView;

@interface UXTableViewHeaderFooterView : UXCollectionReusableView {
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) UXLabel *textLabel;
@property (retain, nonatomic) UXLabel *detailTextLabel;
@property (retain, nonatomic) UXView *contentView;
@property (retain, nonatomic) UXView *backgroundView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (id)initWithReuseIdentifier:(id)a0;

@end
