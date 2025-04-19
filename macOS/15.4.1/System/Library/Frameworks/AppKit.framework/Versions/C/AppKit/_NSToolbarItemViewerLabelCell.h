@interface _NSToolbarItemViewerLabelCell : NSTextFieldCell

@property (class, readonly, retain) _NSToolbarItemViewerLabelCell *_sharedTextCell;

@property BOOL showingRollover;

- (long long)_interiorContentStateInView:(id)a0;
- (long long)_interiorContentValueInView:(id)a0;
- (BOOL)_shouldUseStyledTextInView:(id)a0 withBackgroundStyle:(long long)a1;
- (id)_textFieldContentStyleInView:(id)a0 withBackgroundStyle:(long long)a1;
- (int)_vibrancyBlendModeForControlView:(id)a0;

@end
