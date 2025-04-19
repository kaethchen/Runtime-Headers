@class NSWindow, NSString, SFIconView, NSTextField, NSBox, NSLayoutConstraint, NSArray, NSMutableArray, SFCertificateView, SFCertificateGroupView, NSButton, NSTableView;

@interface SFChooseIdentityPanel_ivars : NSObject {
    SFCertificateView *_certView;
    SFCertificateGroupView *_certGroupView;
    NSWindow *_panel;
    NSButton *_defaultButton;
    NSButton *_alternateButton;
    NSButton *_helpButton;
    NSTableView *_certTable;
    NSWindow *_parentWindowForSheet;
    SEL _clientDidEndSelector;
    id _clientDelegate;
    void *_clientContextInfo;
    struct __SecTrust { } *_trust;
    NSMutableArray *_certDataArray;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
    NSString *_helpAnchor;
    BOOL _showsHelp;
    BOOL _runAsSheet;
    SFIconView *_iconView;
    NSTextField *_messageField;
    NSTextField *_informationField;
    NSBox *_aboveContentBox;
    NSBox *_discloseContentBox;
    NSBox *_bottomContentBox;
    NSLayoutConstraint *_aboveContentHeightConstraint;
    NSButton *_showCertButton;
    float _minWindowWidth;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastDiscloseRect;
    int _indexOfChosenIdentity;
    NSArray *_identities;
    NSString *_defaultMessage;
    NSString *_defaultInformation;
    NSString *_domainString;
    NSWindow *_offScreenWindow;
    BOOL _showsCertButton;
    BOOL _certificatesDisclosed;
}

- (void)dealloc;

@end
