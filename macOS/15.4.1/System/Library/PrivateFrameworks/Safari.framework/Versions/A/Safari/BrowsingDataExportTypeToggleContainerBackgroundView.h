@interface BrowsingDataExportTypeToggleContainerBackgroundView : NSView

- (void)viewDidChangeEffectiveAppearance;
- (BOOL)wantsUpdateLayer;
- (void)updateBorderColor;

@end
