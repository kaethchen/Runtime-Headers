@class PDFViewControllerPrivate;

@interface PDFViewController : NSObject {
    PDFViewControllerPrivate *_private;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithView:(id)a0;
- (void)mouseDown:(id)a0;
- (void)_selectionChanged;
- (void)setActiveAnnotation:(id)a0;
- (void)_addControlForAnnotation:(id)a0;
- (void)_postAnnotationHitNotification:(id)a0;
- (void)_annotationHit:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 toPageView:(id)a1;
- (void)_didEndChangingSelection;
- (void)_doButtonHit:(id)a0;
- (id)_findNextActivatableAnnotationOnPage:(id)a0 fromAnnotation:(id)a1 direction:(unsigned long long)a2;
- (void)_handleButtonHit:(id)a0;
- (BOOL)_handleFormFillingEventAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_pageViewForAnnotation:(id)a0;
- (void)_postAnnotationWillHitNotification:(id)a0;
- (BOOL)_shouldUpdateMarkupWithStyle:(unsigned long long)a0 onPage:(id)a1 forIndexSet:(id)a2;
- (void)_updateSelectionMarkups;
- (void)activateAnnotation:(id)a0;
- (void)activateNextAnnotation:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (id)activeAnnotation;
- (void)addComboBoxControlForAnnotation:(id)a0 withEvent:(id)a1;
- (void)addDetectedAnnotation:(id)a0 toPage:(id)a1;
- (void)choiceMenu:(id)a0;
- (BOOL)dragSelectionWithEvent:(id)a0;
- (void)editNoteForAnnotation:(id)a0;
- (void)findNextActivatableAnnotationFromPage:(id)a0 fromAnnotation:(id)a1 direction:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)handleTextSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (void)interactWithAnnotation:(id)a0;
- (BOOL)isUpdatingSelectionMarkups;
- (void)markupStylePicker:(id)a0 annotation:(id)a1 setMarkupStyle:(unsigned long long)a2;
- (void)populateAnnotationsFromDetectedAnnotationsOnPage:(id)a0;
- (void)removeControlForAnnotation:(id)a0;
- (void)removeNoteForAnnotation:(id)a0;
- (void)setMarkupStyle:(unsigned long long)a0 forAnnotation:(id)a1;
- (void)setMarkupStyle:(unsigned long long)a0 forSelection:(id)a1 clearSelection:(BOOL)a2;
- (BOOL)shouldBeginDrag:(id)a0;
- (void)trackMarqueeTextSelection:(id)a0;
- (void)trackMouse:(id)a0 forAnnotation:(id)a1;
- (void)trackMouse:(id)a0 forPDFScannerResult:(id)a1 onPage:(id)a2;
- (void)trackStandardTextSelection:(id)a0;

@end
