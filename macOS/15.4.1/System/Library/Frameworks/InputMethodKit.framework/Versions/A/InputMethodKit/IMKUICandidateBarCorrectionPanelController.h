@class NSView, NSVisualEffectView;
@protocol NSCorrectionTextViewProtocol;

@interface IMKUICandidateBarCorrectionPanelController : IMKUICandidateWindowController <NSCorrectionPanelProtocol>

@property (retain, nonatomic) NSVisualEffectView *appearanceView;
@property (retain, nonatomic) NSView<NSCorrectionTextViewProtocol> *correctionTextView;

- (void)_dismissAndAccept:(BOOL)a0;
- (void)setDismissedExplicitly:(BOOL)a0;
- (void)setSelectedCandidate:(id)a0;
- (void)updateVisualElements;
- (struct CGSize { double x0; double x1; })preferredWindowSize;
- (void)setCandidateGroups:(id)a0;
- (void)updateWindowFrame;

@end
