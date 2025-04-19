@class NSString;

@interface NSDebugResponderChainPanel : NSPanel <NSTextFieldDelegate> {
    BOOL _isObservingKVO;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPanel;
+ (id)sharedPanelCreatingIfNeeded:(BOOL)a0;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_startObserving;
- (void)_stopObserving;
- (void)controlTextDidEndEditing:(id)a0;
- (void)doDeferredUpdate:(id)a0;
- (id)responderChainViewController;
- (void)updateResponderChainInfo:(id)a0;

@end
