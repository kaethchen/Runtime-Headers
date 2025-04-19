@class NSSet, NSString;

@interface WKInspectorResourceURLSchemeHandler : NSObject <WKURLSchemeHandler> {
    struct RetainPtr<NSMapTable<id<WKURLSchemeTask>,NSOperation *>> { void *m_ptr; } _fileLoadOperations;
    struct RetainPtr<NSBundle> { void *m_ptr; } _cachedBundle;
    struct RetainPtr<NSSet<NSString *>> { void *m_ptr; } _allowedURLSchemesForCSP;
    struct RetainPtr<NSSet<NSURL *>> { void *m_ptr; } _mainResourceURLsForCSP;
}

@property (copy, nonatomic) NSSet *allowedURLSchemesForCSP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)mainResourceURLsForCSP;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;

@end
