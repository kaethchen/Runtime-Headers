@class NSString, NSTextField;

@interface VUINSNavigationLargeTitleHeaderView : NSView

@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })fittingSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidChangeEffectiveAppearance;

@end
