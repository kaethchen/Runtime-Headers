@class NSSplitView, NSMutableArray, NSArray, NSString, SFCertificateView, SFCertificateGroupView, NSButton, NSWindow, NSTableView;

@interface SFCertificatePanel_ivars : NSObject {
    SFCertificateView *_certView;
    SFCertificateGroupView *_certGroupView;
    NSWindow *_panel;
    NSButton *_defaultButton;
    NSButton *_alternateButton;
    NSButton *_helpButton;
    NSTableView *_certTable;
    NSSplitView *_splitView;
    NSWindow *_parentWindowForSheet;
    SEL _clientDidEndSelector;
    id _clientDelegate;
    void *_clientContextInfo;
    struct __SecTrust { } *_trust;
    unsigned int _evalResult;
    NSArray *_policies;
    NSMutableArray *_certificates;
    NSMutableArray *_certDataArray;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_helpAnchor;
    BOOL _showsHelp;
    BOOL _runAsSheet;
    BOOL _noDefaultButton;
    BOOL _editableTrust;
    float _splitHeight;
    float _autosizedWindowHeight;
}

- (void)dealloc;

@end
