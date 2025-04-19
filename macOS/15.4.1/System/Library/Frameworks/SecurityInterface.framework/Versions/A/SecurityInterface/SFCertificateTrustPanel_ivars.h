@class NSTextField, NSSplitView, NSString, NSWindow, NSArray, NSStackView, NSLayoutConstraint, NSButton, SFIconView, NSBox;

@interface SFCertificateTrustPanel_ivars : NSObject {
    SFIconView *_iconView;
    NSStackView *_stackView;
    NSSplitView *_splitView;
    NSTextField *_messageField;
    NSTextField *_informationField;
    NSButton *_showCertButton;
    NSButton *_trustButton;
    NSBox *_aboveContentBox;
    NSBox *_discloseContentBox;
    NSBox *_belowContentBox;
    NSLayoutConstraint *_discloseContentHeightConstraint;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastDiscloseRect;
    NSString *_defaultMessage;
    NSString *_defaultInformation;
    NSWindow *_offScreenWindow;
    BOOL _showsCertButton;
    BOOL _showsTrustButton;
    long long _trustButtonState;
    BOOL _certificatesDisclosed;
    BOOL _savingTrustSettings;
    BOOL _forceAdminTrust;
    BOOL _editableTrust;
    NSArray *_topLevelObjects;
    NSButton *_escButton;
}

- (void)dealloc;

@end
