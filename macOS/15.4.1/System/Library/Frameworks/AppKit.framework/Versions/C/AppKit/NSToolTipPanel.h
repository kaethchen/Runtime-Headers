@class NSString;

@interface NSToolTipPanel : NSPanel {
    NSString *_toolTipString;
}

@property (retain, nonatomic) NSString *toolTipString;

- (void)dealloc;
- (void)_setLevelToShowAboveWindow:(id)a0;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (void)accessibilityPostNotification:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityTitleAttribute;
- (BOOL)canBecomeVisibleWithoutLogin;
- (BOOL)hasShadow;
- (BOOL)ignoresMouseEvents;
- (unsigned long long)shadowOptions;

@end
