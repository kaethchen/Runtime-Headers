@interface AMPPaddedActionButton : NSButton

@property (copy, nonatomic) id /* block */ actualActionBlock;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)buttonWithTitle:(id)a0 actionBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)reflectButton:(id)a0;

@end
