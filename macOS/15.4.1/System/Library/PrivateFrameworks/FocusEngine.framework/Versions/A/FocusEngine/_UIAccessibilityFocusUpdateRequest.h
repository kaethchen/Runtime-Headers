@interface _UIAccessibilityFocusUpdateRequest : _FEFocusUpdateRequest

@property (nonatomic) long long options;

- (BOOL)requiresNextFocusedItem;
- (BOOL)shouldPlayFocusSound;

@end
