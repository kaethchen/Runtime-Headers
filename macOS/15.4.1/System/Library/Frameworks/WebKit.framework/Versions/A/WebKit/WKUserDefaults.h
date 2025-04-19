@interface WKUserDefaults : NSUserDefaults {
    struct RetainPtr<NSString> { void *m_ptr; } m_suiteName;
    struct WeakObjCPtr<WKPreferenceObserver> { id m_weakReference; } m_observer;
}

- (void).cxx_destruct;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)a0 toValuesForKeys:(id)a1;
- (id).cxx_construct;
- (id)initWithSuiteName:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)findPreferenceChangesAndNotifyForKeys:(id)a0 toValuesForKeys:(id)a1;

@end
