@interface FI_TListTextField : FI_TTextField

@property (nonatomic, getter=isDimmed) BOOL dimmed;

- (void)_windowChangedKeyState;
- (void)initCommon;
- (void)updateTextColor;

@end
