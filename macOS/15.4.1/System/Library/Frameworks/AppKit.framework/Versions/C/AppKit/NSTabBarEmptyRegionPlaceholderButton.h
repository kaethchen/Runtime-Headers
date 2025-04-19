@class NSString;
@protocol NSTabBarSyncedButtonDelegate;

@interface NSTabBarEmptyRegionPlaceholderButton : NSTabButton <NSTabBarSyncedButton>

@property (weak, nonatomic) id<NSTabBarSyncedButtonDelegate> buttonInTabSyncGroupDelegate;
@property (nonatomic, getter=isSyncedWithOtherButton) BOOL syncedWithOtherButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setHasMouseOverHighlight:(BOOL)a0 animated:(BOOL)a1 notifyNSTabBarSyncedButtonDelegate:(BOOL)a2;
- (void)_setHasPressedHighlight:(BOOL)a0 notifyNSTabBarSyncedButtonDelegate:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tabBarViewItem:(id)a1;
- (void)setHasMouseOverHighlight:(BOOL)a0 animated:(BOOL)a1;
- (void)setHasPressedHighlight:(BOOL)a0;
- (void)setHighlightStateToPressed:(BOOL)a0 hovered:(BOOL)a1;

@end
