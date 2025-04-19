@class NSView, AKLegacyDoodleController, AKAttributeController, AKActionController, AKModelController, AKUndoController, AKMainEventHandler, AKCursorController_Mac, AKToolController, AKSignatureModelController;
@protocol AKControllerDelegateProtocol;

@interface AKControllerForTesting : AKController

@property (retain) id<AKControllerDelegateProtocol> testingDelegate;
@property (retain) AKModelController *testingModelController;
@property (retain) AKActionController *testingActionController;
@property (retain) AKToolController *testingToolController;
@property (retain) AKAttributeController *testingAttributeController;
@property (retain) AKUndoController *testingUndoController;
@property (retain) AKMainEventHandler *testingMainEventHandler;
@property (retain) NSView *testingToolbarView;
@property (retain) NSView *testingOverlayView;
@property (retain) AKLegacyDoodleController *testingIntelligentSketchController;
@property (retain) AKSignatureModelController *testingSignatureModelController;
@property (retain) AKCursorController_Mac *testingCursorController;

+ (void)renderAnnotation:(id)a0 inContext:(struct CGContext { } *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (id)overlayView;
- (id)modelController;
- (BOOL)validateSender:(id)a0;
- (void)performActionForSender:(id)a0;
- (void)setOverlayShouldPixelate:(BOOL)a0;
- (id)toolbarView;
- (void)updateOverlayViewAtIndex:(unsigned long long)a0;
- (id)undoController;
- (id)actionController;
- (id)attributeController;
- (id)cursorController;
- (id)legacyDoodleController;
- (id)mainEventHandler;
- (void)reloadVisibleToolbarItemIdentifiers;
- (id)signatureModelController;
- (id)toolController;

@end
