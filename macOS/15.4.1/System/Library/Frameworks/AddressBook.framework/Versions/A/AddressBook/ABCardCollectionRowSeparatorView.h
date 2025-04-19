@class NSArray, ABCardViewSeparator;

@interface ABCardCollectionRowSeparatorView : ABCardCollectionRowView

@property (retain, nonatomic) ABCardViewSeparator *separator;
@property (retain, nonatomic) NSArray *separatorConstraints;
@property (nonatomic) double leadingMarginWidth;
@property (nonatomic) double trailingMarginWidth;

- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)a0;
- (void)generateConstraints;
- (void)buildSeparatorView;
- (id)initWithLeadingMarginWidth:(double)a0 trailingMarginWidth:(double)a1;

@end
