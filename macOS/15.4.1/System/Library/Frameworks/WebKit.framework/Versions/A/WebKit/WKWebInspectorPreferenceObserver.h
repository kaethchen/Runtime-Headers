@interface WKWebInspectorPreferenceObserver : NSObject {
    struct RetainPtr<NSUserDefaults> { void *m_ptr; } m_userDefaults;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
