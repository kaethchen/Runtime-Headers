@class UINSSceneView;

@interface UINSEventTranslator : NSObject

@property (weak, nonatomic) UINSSceneView *sceneView;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)draggingExited:(id)a0;
- (void)rightMouseDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)draggingEnded:(id)a0;
- (void)draggingEntered:(id)a0;
- (void)draggingUpdated:(id)a0;
- (void)flagsChanged:(id)a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)prepareForDragOperation:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (void)quickLookWithEvent:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)rotateWithEvent:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)translateWithEvent:(id)a0;
- (BOOL)wantsRestingTouches;
- (struct CGPoint { double x0; double x1; })convertScrollDeltaToSceneDelta:(id)a0;
- (BOOL)cancelOutstandingUserInput;
- (unsigned int)contextIdAtWindowLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertSceneDeltaToSceneReferenceDelta:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertSceneLocationToWindowCoordinates:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertScrollDeltaToSceneReferenceDelta:(id)a0;
- (struct CGPoint { double x0; double x1; })convertWindowLocationToSceneCoordinates:(struct CGPoint { double x0; double x1; })a0;
- (id)hostEnterExitEventWithType:(unsigned long long)a0 sceneLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)hostEventsFromHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)postLeftClickAtSceneLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wantsKeyEvents;

@end
