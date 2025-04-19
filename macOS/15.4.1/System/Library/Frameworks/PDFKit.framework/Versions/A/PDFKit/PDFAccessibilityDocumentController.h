@class NSString, PDFAccessibilityDocumentControllerPrivate;

@interface PDFAccessibilityDocumentController : NSObject <NSAccessibilityCustomRotorItemSearchDelegate, NSAccessibilityElementLoading> {
    PDFAccessibilityDocumentControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityElementWithToken:(id)a0;
- (id)rotor:(id)a0 resultForSearchParameters:(id)a1;
- (id)initWithDocumentView:(id)a0;
- (id)createAccessibilityCustomRotors;
- (Class)_classForRotorType:(long long)a0;
- (BOOL)_isTextTypeNode:(id)a0;
- (id)_itemSearchForType:(long long)a0 fromNode:(id)a1 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 direction:(long long)a3 loadingToken:(id)a4;
- (id)_textSearchResultForString:(id)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fromNode:(id)a2 direction:(long long)a3;
- (void)annotationActivated:(id)a0;
- (void)annotationChanged:(id)a0;
- (id)showNodeWithIdentifier:(unsigned long long)a0 page:(unsigned long long)a1;

@end
