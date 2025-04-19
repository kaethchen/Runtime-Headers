@class IMKUICandidateBarView, IMKUICandidateLineLayout, IMKUIEmojiItemView, IMKUICandidateLineLayoutIterator;

@interface IMKUIEmojiLightweightCandidateWindowController : IMKUICandidateWindowController

@property (retain, nonatomic) IMKUICandidateBarView *candidateBar;
@property (retain, nonatomic) IMKUICandidateLineLayout *lineLayout;
@property (retain, nonatomic) IMKUICandidateLineLayoutIterator *lineLayoutIterator;
@property (retain, nonatomic) IMKUIEmojiItemView *itemView;

- (void).cxx_destruct;
- (void)updateLayout;
- (void)updateVisualElements;
- (void)updateWindowFrameWithAnimation:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })preferredWindowPositionForSize:(struct CGSize { double x0; double x1; })a0;
- (id)candidateAtLocalIndex:(unsigned long long)a0;
- (id)candidateItemAtLocalIndex:(long long)a0;
- (id)candidateItemForCandidate:(id)a0 layout:(id)a1;
- (unsigned long long)localSelectedIndex;
- (void)moveBackwardOneElement;
- (void)moveForwardOneElement;
- (struct CGSize { double x0; double x1; })preferredWindowSize;
- (void)updateAppearanceView;
- (void)updateLayoutTraits;

@end
