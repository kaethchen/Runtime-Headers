@class VFXCameraController, NSString, NSDictionary, VFXNode, VFXView;
@protocol VFXCameraNavigationControllerDelegate;

@interface VFXCameraNavigationController : NSObject <VFXEventHandler, VFXCameraControllerDelegate> {
    long long _browseMode;
    float _cameraOriginalFieldOfView;
    float _fieldOfViewZoomFactor;
    float _originalOrthoScale;
    float _orthographicZoomFactor;
    BOOL _enabled;
    BOOL _translationAllowed;
    BOOL _didEverFocusNode;
    BOOL _isWorldBoundingSphereComputed;
    BOOL _cameraTargetComputed;
    BOOL _pinchShouldMoveCamera;
    BOOL _shouldUpdateTarget;
    BOOL _shouldIgnoreMomentumEvents;
    BOOL _isOrbiting;
    BOOL _recordingPointOfViewEvents;
    BOOL _mouseDown;
    struct { void /* unknown type, empty encoding */ vector; } _worldBoundingSphere;
    void /* unknown type, empty encoding */ _translationOrigin;
    float _initialZoom;
    void /* unknown type, empty encoding */ _initialPointOfViewWorldPosition;
    double _lastKeyInputTime;
    struct CGPoint { double x; double y; } _initialInputLocation;
    struct CGPoint { double x; double y; } _lastInputLocation;
    struct CGPoint { double x; double y; } _accumulatedDrag;
    float _lastRotationAngle;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _drawAtTimeLock;
    struct { BOOL stickyMoveEnabled; void /* unknown type, empty encoding */ direction; unsigned long long pickedAxis; unsigned long long userStickyAxis; } _stickyAxis;
    struct { BOOL automaticLocationUpToDate; BOOL hasAutomatic; } _target;
    struct { struct CGPoint { double x; double y; } lastDragLocation; struct CGPoint { double x; double y; } velocity; double lastDragTime; } _inertia;
    struct { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; NSDictionary *keyCodeConfiguration; struct set<unsigned short, std::less<unsigned short>, std::allocator<unsigned short>> { struct __tree<unsigned short, std::less<unsigned short>, std::allocator<unsigned short>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned short, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<unsigned short>> { unsigned long long __value_; } __pair3_; } __tree_; } keyDown; struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } forward; struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } backward; struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } left; struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } right; } _keyboard;
    struct { BOOL hasShift; BOOL hasOption; } _scrollWheelModifiers;
}

@property (readonly, nonatomic) VFXCameraController *cameraController;
@property (nonatomic) id<VFXCameraNavigationControllerDelegate> delegate;
@property (nonatomic) unsigned long long stickyAxis;
@property (nonatomic) void /* unknown type, empty encoding */ cameraTarget;
@property (nonatomic) BOOL gimbalLockMode;
@property (nonatomic) BOOL enableInertia;
@property (nonatomic) float friction;
@property (nonatomic) BOOL automaticCameraTarget;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL enableFreeCamera;
@property (readonly, nonatomic) VFXNode *freeCamera;
@property (nonatomic) VFXView *view;
@property (nonatomic) BOOL autoSwitchToFreeCamera;
@property (nonatomic) BOOL allowsTranslation;
@property (nonatomic) float flyModeVelocity;
@property (nonatomic) float panSensitivity;
@property (nonatomic) float truckSensitivity;
@property (nonatomic) float rotationSensitivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)becomeFirstResponder;
- (BOOL)flagsChanged:(id)a0;
- (id)initWithView:(id)a0;
- (BOOL)keyDown:(id)a0;
- (BOOL)keyUp:(id)a0;
- (BOOL)magnifyWithEvent:(id)a0;
- (BOOL)mouseDown:(id)a0;
- (BOOL)mouseDragged:(id)a0;
- (BOOL)mouseMoved:(id)a0;
- (BOOL)mouseUp:(id)a0;
- (void)resignFirstResponder;
- (BOOL)rotateWithEvent:(id)a0;
- (BOOL)scrollWheel:(id)a0;
- (float)zoomFactor;
- (void)setZoomFactor:(float)a0;
- (void)cameraDidChange;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void)zoomBy:(float)a0 animate:(BOOL)a1;
- (void)zoomBy:(float)a0;
- (BOOL)_freeCameraActivated;
- (void)_resetFreeViewCamera;
- (float)_scrollWheelMultiplier;
- (void)_startBrowsingIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (void)_switchToFreeViewCamera;
- (float)_translationCoef;
- (void)cameraWillChange;
- (id)pointOfView;
- (void)rotateOf:(float)a0;
- (void)translateByX:(float)a0 Y:(float)a1 Z:(float)a2;
- (BOOL)wantsRedraw;
- (float)_targetDistance;
- (void)__didChangePointOfView;
- (void)__willChangePointOfView;
- (float)_cappedTranslationDelta:(float)a0;
- (void)_computeAutomaticTargetPointIfNeeded;
- (BOOL)_computeBoundingSphereOmittingFloorsForNode:(struct __CFXNode { } *)a0 sphere:(struct CFXSphere { } *)a1;
- (void)_computeTranslationOrigin3DFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)_effectiveStickyAxis;
- (void)_installFreeViewCameraIfNeeded;
- (float)_modeSensitivity;
- (float)_orthographicScaleForZoomFactor:(float)a0;
- (float)_orthographicZoomFactorForProposedZoomFactor:(float)a0;
- (float)_pointOfViewOrthographicScale;
- (BOOL)_pointOfViewUsesOrthographicProjection;
- (void)_prepareFreeViewCamera;
- (void)_setPointOfViewOrthographicScale:(float)a0;
- (void)_setupUpVector;
- (void)_stopInertia;
- (void)_translateToViewPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_willBeginInteraction;
- (void)activateFreeCamera;
- (void /* unknown type, empty encoding */)cameraAutomaticTargetPoint;
- (void)cameraInertiaDidEndForController:(id)a0;
- (void)cameraInertiaWillStartForController:(id)a0;
- (void)focusNode:(id)a0;
- (void)focusNodes:(id)a0;
- (void)invalidateCameraTarget;
- (BOOL)isHandlingKeyboard;
- (void)setKeyCodeConfiguration:(id)a0;
- (BOOL)updateKeyboardStateAndRedrawIfNeeded:(id)a0;
- (void)viewDidDrawAtTime:(double)a0;
- (void)viewWillDrawAtTime:(double)a0;
- (struct CGPoint { double x0; double x1; })viewportMousePosition;
- (void /* unknown type, empty encoding */)worldFront;
- (void)worldWillChange;
- (void /* unknown type, empty encoding */)_defaultTargetForWorld:(id)a0;
- (struct { })_worldBoundingSphere;
- (void)cameraRotationWillStartForController:(id)a0;
- (void)worldDidChange;

@end
