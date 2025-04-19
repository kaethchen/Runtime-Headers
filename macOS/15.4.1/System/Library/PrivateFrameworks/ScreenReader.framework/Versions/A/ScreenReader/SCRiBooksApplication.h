@class SCRElement;

@interface SCRiBooksApplication : SCRApplication {
    SCRElement *_readAllElement;
    BOOL _registeredReadAllElementDestroyedNotification;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_layoutChanged:(id)a0;
- (void)_safeClearCurrentReadAllElement;
- (void)_checkFocusedElementForReadAll;
- (void)_currentReadAllDestroyed:(id)a0;
- (void)_keyboardFocusDidChange:(id)a0;
- (void)_safeCheckFocusedElementForReadAll;
- (void)applicationWillInvalidate;
- (void)clearCurrentReadAllElement;
- (id)configurationValueForKeyPath:(id)a0;
- (void)focusOut;
- (id)initWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0 pid:(int)a1 name:(id)a2 bundleIdentifier:(id)a3 bundleVersion:(id)a4 url:(id)a5;
- (BOOL)isiBooksApplication;
- (void)registerReadAllElement:(id)a0;
- (void)unregisterReadAllElement:(id)a0;

@end
