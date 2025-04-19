@interface PXSButtonRow : PXSRow

+ (id)rowWithTitle:(id)a0 action:(id)a1;

- (id)displayTitle;
- (void)_handleButton:(id)a0;
- (id)createValueView;
- (id)nameViewReuseIdentifier;
- (void)prepareValueViewForReuse:(id)a0;
- (void)updateValueView:(id)a0;
- (id)valueViewReuseIdentifier;

@end
