@interface TLKProminenceView : NSView

@property (nonatomic) unsigned long long prominence;
@property (nonatomic) double borderWidth;
@property (nonatomic) double customColorAlpha;

+ (id)viewWithProminence:(unsigned long long)a0;

- (id)init;
- (BOOL)allowsVibrancy;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)initWithProminence:(unsigned long long)a0;
- (void)tlk_updateForAppearance:(id)a0;

@end
