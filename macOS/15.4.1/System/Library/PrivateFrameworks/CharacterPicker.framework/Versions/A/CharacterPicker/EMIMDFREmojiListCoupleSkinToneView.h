@class NSBox, NSString, EMIMDFREmojiListMatrixView, NSButton, NSMutableArray;

@interface EMIMDFREmojiListCoupleSkinToneView : NSView

@property NSButton *closeButton;
@property NSBox *backgroundBox;
@property (retain) id firstTouchID;
@property BOOL gestureCanceled;
@property (retain) NSString *normalizedCoupleString;
@property (retain) NSMutableArray *combinedCharacterCells;
@property (retain) NSMutableArray *leftSkinToneCells;
@property (retain) NSMutableArray *rightSkinToneCells;
@property long long highlightedCombinedCharacterIndex;
@property long long highlightedLeftSkinToneCellIndex;
@property long long highlightedRightSkinToneCellIndex;
@property long long selectedLeftSkinToneCellIndex;
@property long long selectedRightSkinToneCellIndex;
@property EMIMDFREmojiListMatrixView *sourceMatrixView;

- (void)dealloc;
- (id)init;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (id)_createImageCellWidth:(double)a0;
- (void)_highlightCellAtIndex:(long long)a0 inList:(id)a1;
- (void)_selectCellAtIndex:(long long)a0 inList:(id)a1;
- (void)closeSkinToneSelector:(id)a0;
- (void)showForCharacterIndex:(long long)a0 inMatrixView:(id)a1 byPressAndHold:(BOOL)a2;
- (void)trackHighlightWithLocation:(struct CGPoint { double x0; double x1; })a0 finished:(BOOL)a1;

@end
