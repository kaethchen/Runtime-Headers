@class UINSGameModule, NSSet, UINSTouchAccommodationVisualizer, NSArray, UINSVirtualDigitizer, UINSVirtualMotionDevice;

@interface UINSGameEventTranslator : UINSEventTranslator {
    UINSVirtualDigitizer *_virtualDigitizer;
    UINSTouchAccommodationVisualizer *_touchVisualizer;
    UINSVirtualMotionDevice *_virtualMotionDevice;
    NSArray *_modules;
    UINSGameModule *_exclusiveModule;
    BOOL _wantsKeyboardEvents;
    BOOL _keyFocusStolen;
    id _keyThiefMonitor;
}

@property (class, readonly) NSSet *onboardingModuleNames;

@property BOOL enabled;

+ (void)setOnboardingModuleNames:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
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
- (void)_adjustInputAlternativesDefaultPrefsFromConfigDictionary:(id)a0;
- (id)_defaultHardCodedModules;
- (BOOL)_keyboardIsActive;
- (void)_setupModulesFromConfigurationDictionary:(id)a0;
- (void)_synchronizeSceneOrientationWithVirtualMotionDevice;
- (void)_updateOnboardingModuleSetFromConfigDictionary:(id)a0;
- (void)applyUserDefaults;
- (BOOL)cancelOutstandingUserInput;
- (struct CGPoint { double x0; double x1; })convertNormalizedLocationToSceneLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertSceneLocationToNomalizedLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)loadInputAlternativesConfig;
- (void)presentActiveInputAlternativesIfNeeded;
- (BOOL)relenquishExclusiveGameModuleUse:(id)a0;
- (BOOL)requestExclusiveGameModuleUse:(id)a0;
- (void)setSceneView:(id)a0;
- (void)showConfigurationOverlay;
- (BOOL)wantsKeyEvents;

@end
