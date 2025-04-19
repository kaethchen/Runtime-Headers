@class IMKUISpeechBalloonMask;

@interface IMKUICandidatePressAndHoldWindowController : IMKUICandidateSteppingWindowController

@property (retain, nonatomic) IMKUISpeechBalloonMask *panelMask;

- (id)init;
- (BOOL)isFlipped;
- (void)updateWindowFrameWithAnimation:(BOOL)a0;
- (id)candidateItemForCandidate:(id)a0 layout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredContentFrameForWindowWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })preferredWindowSize;
- (void)updateLayoutTraits;
- (void)updateMaskImageBasedOnPositioning:(id)a0;

@end
