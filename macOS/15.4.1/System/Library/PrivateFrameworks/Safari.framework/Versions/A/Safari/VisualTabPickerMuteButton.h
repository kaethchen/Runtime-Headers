@interface VisualTabPickerMuteButton : NSButton

@property (nonatomic) long long muteButtonState;

- (id)init;
- (BOOL)allowsVibrancy;
- (void)_updateImageAndAccessibilityLabel;

@end
