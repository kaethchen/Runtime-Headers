@class NSWindow;

@interface NSRemotePanelOrderingContext : NSObject

@property (retain) NSWindow *parentWindow;
@property (copy) id /* block */ panelSetupDidCompleteHandler;
@property (copy) id /* block */ panelOrderingDidCompleteHandler;
@property (copy) id /* block */ panelDidReturnHandler;
@property (copy) id /* block */ completionHandler;
@property id didOrderOnScreenNotificationToken;

- (void).cxx_destruct;
- (void)cleanup;

@end
