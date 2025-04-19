@class NSMenu;

@interface AppKit.PlaceholderTrackingSessionDelegate : NSObject <NSMenuTrackingSessionDelegate>

@property (nonatomic, readonly) NSMenu *mainMenu;

- (id)init;
- (void)forwardEventToApp:(id)a0;
- (BOOL)trackingSessionCanForwardEvent:(id)a0 toCustomMenuItem:(id)a1;
- (void)trackingSessionDidEnd:(id)a0;
- (BOOL)trackingSessionDidLoseFocus;
- (void)trackingSessionDidStart;
- (void)trackingSessionWillDismissAnimated;

@end
