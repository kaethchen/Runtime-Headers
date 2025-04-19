@class NSString, NSPanGestureRecognizer;

@interface _UINSGameModuleSliderView : _UINSGameModuleView <NSGestureRecognizerDelegate> {
    NSPanGestureRecognizer *_resizeGr;
    double _resizeStart;
    BOOL _resizeMin;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })position;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (id)initWithSceneView:(id)a0 gameModule:(id)a1;
- (void)layoutModuleControl;
- (void)presentConfigurationSheet;
- (void)resizeAction:(id)a0;

@end
