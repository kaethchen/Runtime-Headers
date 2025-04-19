@class AXFUIElement;

@interface SCRSetupAssistantApplication : SCRApplication {
    AXFUIElement *_titleUIElement;
    AXFUIElement *_currentUIWindow;
}

- (void).cxx_destruct;
- (void)_focusIfNeeded;
- (void)_keyboardFocusDidChange:(id)a0;
- (void)_setIsRegisteredForTitleDeath:(BOOL)a0;
- (void)_titleWasDestroyed:(id)a0;
- (void)_webAreaWasLoaded:(id)a0;
- (void)applicationDidInitialize;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (long long)imageMappingLevel;
- (BOOL)isPreLoginApp;
- (BOOL)isSetupAssistantApplication;
- (void)setIsFocusedEventHandler:(BOOL)a0;

@end
