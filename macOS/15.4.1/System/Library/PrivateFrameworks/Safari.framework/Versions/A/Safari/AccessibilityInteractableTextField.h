@protocol AccessibilityInteractableTextFieldDelegate;

@interface AccessibilityInteractableTextField : NSTextField

@property (weak, nonatomic) id<AccessibilityInteractableTextFieldDelegate> accessibilityDelegate;

- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;

@end
