@class NSButton;

@interface AudioOptionsViewNoiseControl : AudioOptionsViewController

@property NSButton *cbNormal;
@property NSButton *cbANC;
@property NSButton *cbAwareness;

+ (BOOL)peerHasViews:(id)a0;

- (id)init;
- (void)viewDidLoad;
- (void)loadPrefs;
- (void)hideANC;
- (BOOL)isANCOn;
- (void)setListeningModeConfigsDisplay:(unsigned int)a0;
- (void)toggleAwareness;
- (void)hideAwareness;
- (BOOL)isAwarenessOn;
- (BOOL)isNormalOn;
- (unsigned int)listeningModeConfigsDisplay;
- (void)setListeningModeConfigsForNormal:(BOOL)a0 anc:(BOOL)a1 awareness:(BOOL)a2;
- (void)setToggleButtonState:(id)a0 state:(BOOL)a1;
- (void)toggleANC;
- (void)toggleANCListeningMode:(id)a0;
- (void)toggleAwarenessListeningMode:(id)a0;
- (void)toggleNormal;
- (void)toggleNormalListeningMode:(id)a0;
- (id)viewsToAlign;

@end
