@class AKController, NSView, NSString, AKAnnotation, CALayer, NSTextView, NSTextStorage, AKPageController, NSUndoManager;
@protocol AKTextAnnotationProtocol;

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, NSTextViewDelegate> {
    BOOL _wantsTextViewBecomeFirstResponder;
}

@property (weak) AKController *controller;
@property (weak) AKPageController *pageController;
@property (weak) AKAnnotation<AKTextAnnotationProtocol> *annotation;
@property (retain) NSTextView *textView;
@property (retain) CALayer *textViewMaskLayer;
@property (retain) NSView *textViewContainer;
@property (retain) NSTextStorage *textStorage;
@property double renderingTextStorageScaleFactor;
@property double modelToEditorScaleFactor;
@property double handleCompensatingScaleFactor;
@property (retain) NSUndoManager *textViewUndoManager;
@property BOOL isInEndEditing;
@property BOOL isInAdjustAnnotationFrameToFitText;
@property (readonly, nonatomic) BOOL isEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textContentTypeFromCRFormContentType:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)endEditing;
- (id)initWithController:(id)a0;
- (void)insertTextSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (void)textDidChange:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)textViewDidChangeTypingAttributes:(id)a0;
- (id)undoManagerForTextView:(id)a0;
- (void)_endEditing;
- (void)_performBlockOnMainThread:(id /* block */)a0;
- (void)_adjustAnnotationFrameToFitText;
- (void)_adjustEditorToFitAnnotation:(id)a0 withText:(id)a1;
- (void)_beginEditingAnnotation:(id)a0 withPageController:(id)a1 selectAllText:(BOOL)a2 withPencil:(BOOL)a3;
- (void)_commitToModelWithoutEndingEditing;
- (BOOL)_doHandleBackTab;
- (BOOL)_doHandleTab;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_editorFrameForTextBoundsInModel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_newScaledPaths:(id)a0 withScaleFactor:(double)a1 aboutCenter:(struct CGPoint { double x0; double x1; })a2;
- (void)_updateTextView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andOrientation:(long long)a2 additionalRotation:(double)a3;
- (void)beginEditingAnnotation:(id)a0 withPageController:(id)a1 selectAllText:(BOOL)a2;
- (void)beginEditingAnnotation:(id)a0 withPageController:(id)a1 selectAllText:(BOOL)a2 withPencil:(BOOL)a3;
- (void)commitToModelWithoutEndingEditing;
- (void)updateForTextAttributeChange;

@end
