@class NSString, NSAttributedString, SCRCUserDefaults;
@protocol AXVABrailleWindowInterface;

@interface SCRVisualsBrailleWindow : NSObject <NSWindowDelegate>

@property (retain, nonatomic, setter=_setBrailleAgent:) id<AXVABrailleWindowInterface> _brailleAgent;
@property (nonatomic, setter=_setEnabled:) long long _enabled;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (retain, nonatomic, setter=_setEnabledObserver:) id _enabledObserver;
@property (nonatomic) long long enabled;
@property (nonatomic) BOOL brailleDeviceConnected;
@property (copy, nonatomic) NSAttributedString *brailleWithAttributes;
@property (nonatomic) BOOL temporarilyHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setFontSize:(double)a0;
- (void)brailleWindowFrameWithReply:(id /* block */)a0;
- (void)decreaseBrailleWindowSizeInDirection:(long long)a0 withSteps:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)hideBrailleWindow;
- (void)increaseBrailleWindowSizeInDirection:(long long)a0 withSteps:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)moveBrailleWindowInDirection:(long long)a0 withSteps:(unsigned long long)a1 withReply:(id /* block */)a2;
- (void)showBrailleWindow;
- (void)_brailleWindowNeedsDisplay;
- (id)_createBrailleInfoFromAttributes:(id)a0;
- (id)initWithBrailleAgent:(id)a0 userDefaults:(id)a1;
- (void)setEnabledAndAnnounceChange:(long long)a0;
- (void)setEnabledValue:(id)a0;

@end
