@class SiriUIContentLabel;

@interface SiriUICardHeaderView : NSView

@property (weak) SiriUIContentLabel *sashLabel;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityIdentifier;
- (void)awakeFromNib;
- (void)viewDidChangeEffectiveAppearance;
- (void)_adjustSashTitleCompositeFilterForCurrentAppearance;

@end
