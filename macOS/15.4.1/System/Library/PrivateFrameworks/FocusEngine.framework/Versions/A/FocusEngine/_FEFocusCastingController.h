@class _FEFocusSystem, UIView;

@interface _FEFocusCastingController : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } screenEntryPoint;
@property (nonatomic) unsigned long long entryPointAxis;
@property (nonatomic) BOOL isRememberingEntryPoint;
@property (retain, nonatomic) UIView *focusMovementIndicator;
@property (retain, nonatomic) UIView *focusEntryIndicator;
@property (retain, nonatomic) UIView *focusCastingIndicator;
@property (weak, nonatomic) _FEFocusSystem *focusSystem;
@property (nonatomic) double entryPointMemorizationTimeout;

- (id)init;
- (void).cxx_destruct;
- (void)teardown;
- (unsigned long long)_axisForHeading:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_castingFrameForFocusedNormalizedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 heading:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })_castingPointInNormalizedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forHeading:(unsigned long long)a1;
- (void)_createFocusMovementIndicator;
- (void)_destroyFocusMovementIndicator;
- (struct CGPoint { double x0; double x1; })_entryPointInNormalizedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forHeading:(unsigned long long)a1;
- (id)_focusEffectsControllerForFocusedItem;
- (struct CGPoint { double x0; double x1; })_movementPointInNormalizedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_normalizedCoordinateSpace;
- (void)_positionFocusMovementIndicators;
- (void)_startRememberingEntryPoint;
- (void)_stopRememberingEntryPoint;
- (void)_updateFocusItemFromNormalizedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toNormalizedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withHeading:(unsigned long long)a2;
- (void)_updateFocusMovementIndicatorDisplay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })castingFrameForFocusedItem:(id)a0 heading:(unsigned long long)a1 inCoordinateSpace:(id)a2;
- (void)focusEffectsController:(id)a0 updateMovementDirection:(struct CGVector { double x0; double x1; })a1;
- (void)forceUpdateFocusCastingFocusedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1 heading:(unsigned long long)a2;
- (void)forgetEntryPoint;
- (void)updateFocusCastingWithContext:(id)a0;

@end
