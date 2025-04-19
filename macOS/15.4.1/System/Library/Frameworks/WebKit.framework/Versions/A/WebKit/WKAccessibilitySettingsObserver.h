@interface WKAccessibilitySettingsObserver : NSObject {
    void *_impl;
}

- (void)dealloc;
- (id)initWithImpl:(void *)a0;
- (void)_settingsDidChange:(id)a0;

@end
