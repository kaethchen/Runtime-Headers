@class NSView;

@interface FI_TScopeBarStackView : NSStackView

@property (retain, nonatomic) NSView *viewToSwapIn;
@property (retain, nonatomic) NSView *viewToSwapOut;

- (void).cxx_destruct;
- (void)layout;

@end
