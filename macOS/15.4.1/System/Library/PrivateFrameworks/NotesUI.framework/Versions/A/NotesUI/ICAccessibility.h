@interface ICAccessibility : NSObject <ICAccessibilityExtras>

+ (id)sharedInstance;
+ (id)synthesizeAccessibilityRightClickEventAtCenterOfView:(id)a0;

- (BOOL)needsAccessibilityElements;
- (void)postAnnouncement:(id)a0 withSender:(id)a1 priority:(long long)a2;
- (BOOL)shouldPerformLoggingForSwitchControl;
- (BOOL)shouldPerformLoggingForVoiceOver;

@end
