@interface BrowserToolbar : NSToolbar

@property (nonatomic) BOOL canHostUnifiedTabBar;

- (BOOL)_allowsDisplayMode:(unsigned long long)a0;
- (void)validateVisibleItems;

@end
