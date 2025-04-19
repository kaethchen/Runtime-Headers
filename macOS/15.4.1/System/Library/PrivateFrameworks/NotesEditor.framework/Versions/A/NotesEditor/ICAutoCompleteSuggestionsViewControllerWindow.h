@interface ICAutoCompleteSuggestionsViewControllerWindow : NSPanel

@property (readonly, nonatomic) BOOL shouldShowDivider;
@property (readonly, nonatomic) BOOL shouldShowSectionHeaders;

- (BOOL)canBecomeKeyWindow;
- (unsigned long long)shadowOptions;

@end
