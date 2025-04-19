@class NSString, PDFKitTextViewPrivate;

@interface PDFKitTextView : NSObject <NSTextViewDelegate, NSTextContentPrivate> {
    PDFKitTextViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setFont:(id)a0;
- (void)_setup;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (id)accessibilityTitleUIElement;
- (id)annotation;
- (BOOL)becomeFirstResponder;
- (void)insertTextSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (id)layer;
- (void)removeFromSuperview;
- (void)rotateByAngle:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textDidChange:(id)a0;
- (id)textView;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)_applyScale:(double)a0 toView:(id)a1;
- (void)_didChangeZoomFactor:(id)a0;
- (void)_setAlignment:(long long)a0;
- (void)_setAttributedString:(id)a0;
- (void)_setFontColor:(id)a0;
- (void)_setString:(id)a0;
- (void)_setupTopLevelView;
- (void)_updateScaleFactor;
- (void)autoFillDidInsertWithExplicitInvocationMode:(BOOL)a0;
- (BOOL)handleBackTab;
- (BOOL)handleTab;
- (id)initWithAnnotation:(id)a0 pdfPageView:(id)a1 pdfView:(id)a2;

@end
