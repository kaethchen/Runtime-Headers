@interface BindablePopUpButton : NSPopUpButton

@property (nonatomic) long long pendingItemSelection;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pullsDown:(BOOL)a1;
- (void)setMenu:(id)a0;
- (void)setIndexOfSelectedItem:(long long)a0;

@end
