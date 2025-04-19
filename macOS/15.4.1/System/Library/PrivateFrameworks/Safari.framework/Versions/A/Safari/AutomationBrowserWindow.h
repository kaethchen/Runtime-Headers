@interface AutomationBrowserWindow : BrowserWindow

@property (readonly, nonatomic) BOOL sendingSynthesizedEvent;
@property (readonly, nonatomic) BOOL sendingAllowedEvent;

- (void)postEvent:(id)a0 atStart:(BOOL)a1;
- (void)sendEvent:(id)a0;

@end
