@interface AXVoiceOverServer : AXServer

@property (readonly, nonatomic, getter=isScreenCurtainEnabled) BOOL isScreenCurtainEnabled;

+ (id)server;

- (BOOL)_connectIfNecessary;
- (id)_serviceName;
- (BOOL)triggerEventCommand:(id)a0;
- (BOOL)triggerCommand:(long long)a0;
- (BOOL)triggerGesture:(id)a0;
- (void)clearLastSoundsPlayed:(id /* block */)a0;
- (void)clearLastSpokenPhrases:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentCursorFrame;
- (id)currentFocusedElement;
- (id)currentRotorName;
- (BOOL)isBluetoothBrailleDisplayConnected;
- (BOOL)isBrailleInputUIShowing;
- (BOOL)isBrailleScreenInputInScreenAwayMode;
- (BOOL)isHandwritingInputUIShowing;
- (id)lastScreenChange;
- (id)lastSoundsPlayed;
- (id)lastSpokenContents;
- (id)lastSpokenPhrases;
- (void)performAutomationTestingCommand:(id)a0 userInfo:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (id)recognizedGestureForTutorial;
- (BOOL)triggerCommand:(long long)a0 withArgument:(id)a1;

@end
