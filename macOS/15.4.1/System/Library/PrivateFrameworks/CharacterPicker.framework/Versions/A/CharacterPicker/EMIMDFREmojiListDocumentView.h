@class NSString, EMIMDFREmojiListSkinToneView, EMIMDFREmojiListCoupleSkinToneView, NSMutableArray;

@interface EMIMDFREmojiListDocumentView : NSView <NSGestureRecognizerDelegate>

@property (retain) NSMutableArray *labelViews;
@property (retain) NSMutableArray *characterViews;
@property long long topVisibleCategoryIndex;
@property (retain) id firstTouchID;
@property BOOL gestureCanceled;
@property long long highlightedCategoryIndex;
@property long long highlightedCharacterIndex;
@property BOOL scrollingByExternalTrigger;
@property BOOL scrollingStartAtCollapsedEdge;
@property (retain) EMIMDFREmojiListSkinToneView *skinToneView;
@property (retain) EMIMDFREmojiListCoupleSkinToneView *coupleSkinToneView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (id)_labelForIndex:(long long)a0;
- (id)_characterMatrixViewForIndex:(long long)a0;
- (void)_handlePressGesture:(id)a0;
- (void)_highlightCharacterWithTouch:(id)a0;
- (id)_selectingCharacter;
- (void)_sencondaryInitForChildViews;
- (void)_showPreviewWindow:(id)a0;
- (void)scrollToCategory:(long long)a0;
- (void)scrollToPointProgrammatically:(double)a0;

@end
