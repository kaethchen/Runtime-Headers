@class AKPageController, NSString;

@interface AKMainEventHandler_Mac : AKMainEventHandler <NSMenuItemValidation>

@property (retain) id eventMonitor;
@property BOOL shouldEatNextKeyUp;
@property (weak) AKPageController *lastPageControllerWithCropRollover;
@property BOOL lastCursorWasInVisibleBounds;
@property BOOL candidatePickerWasDismissed;
@property BOOL isTornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)teardown;
- (id)initWithController:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)handleKeyboardEvent:(id)a0;
- (void)_addNoteAnnotationAction:(id)a0;
- (void)_bringSelectedAnnotationsForwardAction:(id)a0;
- (void)_bringSelectedAnnotationsToFrontAction:(id)a0;
- (void)_candidatePickerDidDismissNotification:(id)a0;
- (BOOL)_eventHasValidLocation:(id)a0;
- (BOOL)_eventIsForOurWindow:(id)a0;
- (void)_highlightMenuAction:(id)a0;
- (BOOL)_mouseEventInVisibleBounds:(id)a0;
- (void)_removeHighlightAnnotationAction:(id)a0;
- (void)_removeNoteAnnotationAction:(id)a0;
- (void)_sendSelectedAnnotationsBackwardAction:(id)a0;
- (void)_sendSelectedAnnotationsToBackAction:(id)a0;
- (void)_showContextMenuForEvent:(id)a0 withAnnotation:(id)a1 onPageController:(id)a2;
- (BOOL)_validateChangingSelectionZOrderForDirection:(BOOL)a0 onPageModelController:(id)a1;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)handleRightDownEvent:(id)a0;
- (BOOL)mainHandleEvent:(id)a0 orRecognizer:(id)a1;
- (void)updateCursorForEvent:(id)a0;

@end
