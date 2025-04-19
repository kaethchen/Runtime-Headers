@interface QCSCN_CameraControlEventHandler : QCSCN_EventHandler {
    id _dReserved;
}

@property BOOL gimbalLockMode;
@property struct _SCNVector3 { double x0; double x1; double x2; } gimbalLockVector;
@property BOOL enableInertia;
@property double friction;
@property BOOL automaticCameraTarget;
@property struct _SCNVector3 { double x0; double x1; double x2; } cameraTarget;

- (void)dealloc;
- (id)init;
- (BOOL)magnifyWithEvent:(id)a0;
- (BOOL)mouseDown:(id)a0;
- (BOOL)mouseDragged:(id)a0;
- (BOOL)mouseUp:(id)a0;
- (BOOL)rotateWithEvent:(id)a0;
- (BOOL)scrollWheel:(id)a0;
- (void)viewWillDraw;
- (double)zoomFactor;
- (void)setZoomFactor:(double)a0;
- (void)cameraDidChange;
- (void)_beginTranslateAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void)zoomBy:(float)a0 animate:(BOOL)a1;
- (void)_onInertiaTimer;
- (void)sceneWillChange;
- (void)zoomBy:(float)a0;
- (void)_didDragTo:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_freeCameraActivated;
- (void)_resetFreeViewCamera;
- (void)_rotateWithDrag:(struct CGPoint { double x0; double x1; })a0 mode:(int)a1 stickyAxis:(int)a2;
- (float)_scrollWheelMultiplier;
- (void)_startBrowsingIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void)_stopInertiaIfNeeded;
- (void)_switchToFreeViewCamera;
- (void)_translateTo:(struct CGPoint { double x0; double x1; })a0;
- (float)_translationCoef;
- (void)cameraWillChange;
- (void)endDragging;
- (void)endDraggingWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (struct _SCNVector3 { double x0; double x1; double x2; })frontVector;
- (BOOL)isViewingAnObject;
- (void)rotateOf:(double)a0;
- (void)sceneDidChange;
- (void)translateByX:(float)a0 Y:(float)a1 Z:(float)a2;
- (void)updateCameraTargetIfNeeded;
- (struct C3DSphere { double x0; struct _SCNVector3 { double x0; double x1; double x2; } x1; })viewedObjectSphere;
- (BOOL)wantsRedraw;

@end
