@interface TipKit.TipNSPopover : NSPopover

@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)popoverWillShow:(id)a0;

@end
