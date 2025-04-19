@class NSImageView, NSString, NSImage, NSView, NSLayoutConstraint, NSTextField, NSMutableArray;

@interface IOBluetoothPasskeyDisplay : NSView {
    NSImageView *mReturnImageView;
    NSImageView *mBackgroundImage;
    BOOL showFeedback;
    NSTextField *mPasskeyString;
    NSMutableArray *mPasskeyCharacters;
    unsigned long long mPasskeyIndex;
}

@property BOOL usePasskeyNotificaitons;
@property BOOL isIncomingRequest;
@property (copy) NSString *passkey;
@property (retain) NSImage *returnImage;
@property (retain) NSImage *returnHighlightImage;
@property NSView *centeredView;
@property NSLayoutConstraint *backgroundImageConstraint;

+ (id)sharedDisplayView;

- (id)init;
- (id)init;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (void)awakeFromNib;
- (void)setReturnType:(int)a0;
- (void)_displayPasskey;
- (void)_displayPasskeyIndicator;
- (void)advancePasskeyIndicator;
- (void)fauxUIElement:(id)a0 setFocus:(id)a1;
- (struct CGPoint { double x0; double x1; })fauxUIElementPosition:(id)a0;
- (struct CGSize { double x0; double x1; })fauxUIElementSize:(id)a0;
- (id)fauxUIElementValue:(id)a0;
- (BOOL)isFauxUIElementFocusable:(id)a0;
- (void)resetAll;
- (void)resetPasskeyIndicator;
- (void)retreatPasskeyIndicator;
- (void)setPasskey:(id)a0 forDevice:(id)a1 usingSSP:(BOOL)a2;
- (void)setPasskeyIndicatorEnabled:(BOOL)a0;
- (void)setPasskeyString:(id)a0;
- (void)setupUIForDevice:(id)a0;
- (void)setupUIForSSPDevice:(id)a0;

@end
