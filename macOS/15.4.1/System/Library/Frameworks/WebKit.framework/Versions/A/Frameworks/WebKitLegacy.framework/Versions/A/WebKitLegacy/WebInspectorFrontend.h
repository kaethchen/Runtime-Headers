@interface WebInspectorFrontend : NSObject {
    struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient *m_ptr; } m_frontendClient;
}

- (void)close;
- (id).cxx_construct;
- (void)detach;
- (void)setDebuggingEnabled:(BOOL)a0;
- (BOOL)isDebuggingEnabled;
- (void)attach;
- (id)initWithFrontendClient:(struct NakedPtr<WebInspectorFrontendClient> { struct WebInspectorFrontendClient *x0; })a0;
- (BOOL)isProfilingJavaScript;
- (BOOL)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(BOOL)a0;
- (void)showConsole;
- (void)startProfilingJavaScript;
- (void)stopProfilingJavaScript;

@end
