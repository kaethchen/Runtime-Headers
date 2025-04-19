@class FI_TNotificationCenterObserverGlue, NSString, NSObject, NSSavePanel, FI_TEditTextField, FI_TTextField, FI_TButton;

@interface FI_NewFolderController : NSWindowController <NSTextFieldDelegate> {
    NSSavePanel *_savePanel;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _newFolderParent;
    FI_TTextField *_promptField;
    FI_TEditTextField *_folderNameField;
    FI_TTextField *_errorMessage;
    FI_TButton *_okButton;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _windowWillCloseObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isRunning;
- (void)ok:(id)a0;
- (void)cancel:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (void)windowDidLoad;
- (id)windowNibName;
- (BOOL)legalNameCheck:(const void *)a0;
- (id)_defaultNewFolderName;
- (void)_updateOkButtonEnabledStateAndErrorMessage;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })proposedNewFolderName;
- (void)showAsSheetOnSavePanel:(id)a0 completionHandler:(const void *)a1;

@end
