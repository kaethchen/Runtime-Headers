@class NSString;

@interface BundleAutoFillNode : NSObject <WBSFormAutoFillNode> {
    struct BundleNodeHandle { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _node;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoFillNodeWithBundleNodeHandle:(const void *)a0;
+ (long long)formAutoFillButtonTypeFromWKButtonType:(unsigned char)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })elementBounds;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (BOOL)isHTMLTextAreaElementUserEdited;
- (BOOL)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutoFilledAndObscured:(BOOL)a0;
- (void)setHTMLInputElementAutoFilledAndViewable:(BOOL)a0;
- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(BOOL)a0;
- (void)setHTMLInputElementAutofilled:(BOOL)a0;
- (void)setHTMLInputElementSpellCheckEnabled:(BOOL)a0;
- (void)setSpinnerVisibilityOnHTMLInputElement:(BOOL)a0;
- (id)initWithJSWrapper:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (id)initWithWKBundleNodeHandle:(const void *)a0;
- (const void *)wkBundleNodeHandle;

@end
