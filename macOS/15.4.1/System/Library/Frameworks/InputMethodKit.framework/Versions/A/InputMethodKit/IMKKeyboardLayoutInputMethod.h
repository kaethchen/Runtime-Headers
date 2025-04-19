@interface IMKKeyboardLayoutInputMethod : IMKAbstractInputMethod

@property (nonatomic) BOOL didStartScrubberTimer;
@property BOOL showsPanelWhenScrubbing;

- (void)dealloc;
- (void)candidateMenu:(id)a0 didChangeFocusTo:(id)a1;
- (void)candidateMenu:(id)a0 didSelectCandidate:(id)a1;
- (void)candidateMenuDidFinishInteracting:(id)a0;
- (void)hideScrubber;
- (id)initWithKeyboardToAttach:(id)a0 inputMethodToChain:(id)a1;
- (void)showCandidatesOnKeyboardFor:(id)a0 withKeyboardState:(id)a1;
- (void)showScrubber;

@end
