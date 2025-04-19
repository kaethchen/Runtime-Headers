@class NSString, NSResponder;
@protocol NSLocalTitlebarToolbarRenameSessionDelegate;

@interface _NSLocalTitlebarToolbarRenameSession : NSObject <NSTextFieldDelegate> {
    id /* block */ _textFieldUpdateHandler;
    id<NSLocalTitlebarToolbarRenameSessionDelegate> _delegate;
    BOOL _success;
    id _localEventMonitor;
    id _globalEventMonitor;
    id _windowResignKeyToken;
    id _menuTrackingToken;
}

@property (copy) NSString *sessionResult;
@property (readonly, copy) NSString *originalTextFieldValue;
@property (weak) NSResponder *previousResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)control:(id)a0 textShouldEndEditing:(id)a1;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (id)initWithDelegate:(id)a0 textFieldUpdateHandler:(id /* block */)a1;
- (void)installCancellationListenersForTextField:(id)a0;
- (void)runSessionWithTextField:(id)a0;
- (void)uninstallCancellationListeners;

@end
