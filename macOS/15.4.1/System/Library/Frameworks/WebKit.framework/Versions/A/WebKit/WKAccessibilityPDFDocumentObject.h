@interface WKAccessibilityPDFDocumentObject : NSObject {
    struct RetainPtr<PDFDocument> { void *m_ptr; } _pdfDocument;
    struct WeakObjCPtr<NSObject> { id m_weakReference; } _parent;
    struct ThreadSafeWeakPtr<WebKit::UnifiedPDFPlugin, WTF::NoTaggingTraits<WebKit::UnifiedPDFPlugin>> { struct TaggedPtr<WebKit::UnifiedPDFPlugin, WTF::NoTaggingTraits<WebKit::UnifiedPDFPlugin>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _pdfPlugin;
}

@property struct WeakPtr<WebCore::HTMLPlugInElement, WebCore::WeakPtrImplWithEventTargetData, WTF::RawPtrTraits<WebCore::WeakPtrImplWithEventTargetData>> { struct RefPtr<WebCore::WeakPtrImplWithEventTargetData, WTF::RawPtrTraits<WebCore::WeakPtrImplWithEventTargetData>, WTF::DefaultRefDerefTraits<WebCore::WeakPtrImplWithEventTargetData>> { struct WeakPtrImplWithEventTargetData *m_ptr; } m_impl; } pluginElement;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)document;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityFocusedUIElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityParent;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilitySubrole;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityVisibleChildren;
- (id)accessibilityWindow;
- (BOOL)isAccessibilityElement;
- (void)setParent:(id)a0;
- (void)setPDFDocument:(struct RetainPtr<PDFDocument> { void *x0; })a0;
- (id)initWithPDFDocument:(struct RetainPtr<PDFDocument> { void *x0; })a0 andElement:(void *)a1;
- (id)accessibilityAssociatedControlForAnnotation:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertFromPDFPageToScreenForAccessibility:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageIndex:(unsigned long long)a1;
- (void)gotoDestination:(id)a0;
- (void)setActiveAnnotation:(id)a0;
- (void)setPDFPlugin:(void *)a0;

@end
