@interface WebFramePrivate : NSObject {
    struct NakedPtr<WebCore::LocalFrame> { struct LocalFrame *m_ptr; } coreFrame;
    struct RetainPtr<WebFrameView> { void *m_ptr; } webFrameView;
    struct unique_ptr<WebScriptDebugger, std::default_delete<WebScriptDebugger>> { struct __compressed_pair<WebScriptDebugger *, std::default_delete<WebScriptDebugger>> { struct WebScriptDebugger *__value_; } __ptr_; } scriptDebugger;
    struct unique_ptr<WebCore::CaptionUserPreferencesTestingModeToken, std::default_delete<WebCore::CaptionUserPreferencesTestingModeToken>> { struct __compressed_pair<WebCore::CaptionUserPreferencesTestingModeToken *, std::default_delete<WebCore::CaptionUserPreferencesTestingModeToken>> { struct CaptionUserPreferencesTestingModeToken *__value_; } __ptr_; } captionPreferencesTestingModeToken;
    id internalLoadDelegate;
    BOOL shouldCreateRenderers;
    BOOL includedInWebKitStatistics;
    struct RetainPtr<NSString> { void *m_ptr; } url;
    struct RetainPtr<NSString> { void *m_ptr; } provisionalURL;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setWebFrameView:(id)a0;

@end
