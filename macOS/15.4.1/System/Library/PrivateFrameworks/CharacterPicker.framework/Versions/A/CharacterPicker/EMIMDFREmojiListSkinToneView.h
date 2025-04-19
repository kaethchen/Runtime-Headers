@class NSImageView, NSBox, EMIMDFREmojiListMatrixView, NSLayoutConstraint, NSButton, NSMutableArray;

@interface EMIMDFREmojiListSkinToneView : NSView

@property NSButton *closeButton;
@property NSBox *backgroundBox;
@property (retain) NSMutableArray *skinToneCells;
@property BOOL hasClosebox;
@property BOOL shownAtOppositeSide;
@property NSLayoutConstraint *closeBoxLeadingConstraint;
@property NSLayoutConstraint *skinToneBoxLeadingConstraint;
@property (retain) id firstTouchID;
@property BOOL gestureCanceled;
@property long long selectedCharacterIndex;
@property long long highlightedCharacterIndex;
@property EMIMDFREmojiListMatrixView *sourceMatrixView;
@property NSImageView *prereleaseStamp;

- (void)dealloc;
- (id)init;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)_highlightCharacterCellAtIndex:(long long)a0;
- (void)closeSkinToneSelector:(id)a0;
- (void)showForCharacterIndex:(long long)a0 inMatrixView:(id)a1 byPressAndHold:(BOOL)a2;
- (void)trackHighlightWithLocation:(struct CGPoint { double x0; double x1; })a0 finished:(BOOL)a1;

@end
