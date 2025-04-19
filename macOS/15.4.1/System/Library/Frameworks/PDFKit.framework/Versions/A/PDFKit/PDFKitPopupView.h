@class NSString, PDFKitPopupViewPrivate;

@interface PDFKitPopupView : NSView <NSTextViewDelegate> {
    PDFKitPopupViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)removeFromSuperview;
- (void)textDidChange:(id)a0;
- (id)undoManagerForTextView:(id)a0;
- (void)_setupPopupView;
- (void)_presentPopupView;
- (void)_presentPopupView_macOS;
- (void)_removeControlForAnnotation;
- (void)_updateParentContents;
- (id)initWithParentAnnotation:(id)a0 owningPageView:(id)a1 owningPDFView:(id)a2;

@end
