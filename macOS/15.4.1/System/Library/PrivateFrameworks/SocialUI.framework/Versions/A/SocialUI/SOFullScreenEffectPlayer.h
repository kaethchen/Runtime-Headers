@class NSView, NSMutableArray;

@interface SOFullScreenEffectPlayer : IMFullScreenEffectPlayer {
    NSMutableArray *_effectViews;
}

@property (retain) NSView *backgroundView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } messageRect;
@property (retain, nonatomic) NSView *hostView;
@property (retain, nonatomic) NSView *bottomView;
@property (retain, nonatomic) NSView *topView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)backgroundColor;
- (void)didAbortPlaying;
- (void)addBackdropView:(id)a0;
- (void)addBackgroundEffectView:(id)a0;
- (void)addForegroundEffectView:(id)a0;
- (void)addViewAboveTopView:(id)a0;
- (void)addViewBelowBottomView:(id)a0;
- (id)createSoundPlayer;
- (void)didStopPlaying;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })flipRectYAxis:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })focusPointFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeViews;
- (void)willStartPlaying;

@end
