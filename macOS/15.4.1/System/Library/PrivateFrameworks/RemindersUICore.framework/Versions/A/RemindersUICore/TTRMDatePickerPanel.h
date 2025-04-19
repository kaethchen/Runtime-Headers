@protocol TTRMDatePickerPanelDelegate;

@interface TTRMDatePickerPanel : NSPanel

@property (weak) id<TTRMDatePickerPanelDelegate> panelDelegate;

- (void).cxx_destruct;
- (void)resignKeyWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)hasKeyAppearance;
- (void)selectKeyViewFollowingView:(id)a0;
- (void)selectKeyViewPrecedingView:(id)a0;

@end
